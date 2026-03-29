# 📄 02_Struct_vs_Class.md


# Struct vs Class

## Concept
Struct and class are similar in C++, but differ mainly in default access and usage.

## Simple Explanation
- struct → used for simple data grouping  
- class → used for full OOP design  

## Code Example
```cpp
#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

class Teacher {
    string name;
public:
    int age;

    void setName(string n) { name = n; }
    string getName() { return name; }
};

int main() {
    Student s = {"Alice", 20};

    Teacher t;
    t.age = 40;
    t.setName("John");

    cout << s.name << endl;
    cout << t.getName() << endl;
}