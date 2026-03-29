# Copy Constructor (Deep vs Shallow Copy)

## Concept

A copy constructor is a special constructor that creates a new object as a copy of an existing object.
It is automatically called when:
- an object is initialized from another object
- an object is passed by value
- an object is returned by value

---

## Simple Explanation

When an object is copied, there are two ways:
- **Shallow Copy** → copies memory address (same data)
- **Deep Copy** → creates new memory and copies actual data

---

## Problem with Shallow Copy

If a class contains a pointer, default copy constructor performs shallow copy.
This leads to:
- multiple objects pointing to same memory
- modification affecting both objects
- double deletion in destructor (undefined behavior)

---

## Code Example (Deep Copy)

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int* marks;

    // parameterized constructor
    Student(string n, int m) {
        name = n;
        marks = new int(m);
    }

    // copy constructor (deep copy)
    Student(const Student &s) {
        name = s.name;
        marks = new int(*(s.marks));
    }

    void show() {
        cout << name << " : " << *marks << endl;
    }

    ~Student() {
        delete marks;
    }
};

int main() {
    Student s1("Kush", 80);
    Student s2 = s1;   // copy constructor called
    *(s2.marks) = 50;
    s1.show();
    s2.show();
}
```

---

## Why Use `const` in Copy Constructor?

The copy constructor signature uses `const`:

```cpp
Student(const Student &s)
```

### 1. Prevent Modification of Original Object

Using `const` ensures that the original object being copied **cannot be modified** inside the copy constructor.
Without `const`, it would be possible to accidentally change the source object, which is not desired during copying.

```cpp
// Bad practice (possible without const):
s.name = "Changed"; // modifies original object ❌

// With const, this line causes a compile-time error ✅
```

### 2. Allows Copying Temporary (rvalue) Objects

`const` is required to allow the copy constructor to **accept temporary objects**.

```cpp
Student s2 = Student("Kush", 90);
// A temporary object is created here
```

- A **non-const** reference **cannot** bind to a temporary object
- A **const** reference **can** bind to a temporary object
- Without `const`, this would cause a **compilation error**

---

## Important Points

| Point | Detail |
|---|---|
| Default copy constructor | Performs **shallow copy** |
| User-defined copy constructor | Used for **deep copy** |
| When is it required? | When class uses **dynamic memory (pointers)** |
| Why `const` in parameter? | Prevents modification + allows temporary objects |