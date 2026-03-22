## 📌 std::function (C++)

### 🔹 What is std::function?

* `std::function`  is a flexible, type-safe wrapper that can store and call any callable (functions, lambdas, functors) using a single interface.

* It can store **any callable**:

  * Normal functions
  * Function pointers
  * Lambdas
  * Functors (objects with `operator()`)

---

### 🔹 Syntax

```cpp
std::function<return_type(parameter_types)>
```

**Example:**

```cpp
std::function<int(int, int)> f;
```

---

### 🔹 Basic Example

```cpp
#include <iostream>
#include <functional>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    function<int(int,int)> f = add;
    cout << f(2,3); // Output: 5
}
```

---

### 🔹 Supports Multiple Callables

**1. Normal Function**

```cpp
function<int(int,int)> f = add;
```

**2. Lambda**

```cpp
function<int(int,int)> f = [](int a, int b){
    return a + b;
};
```

**3. Functor**

```cpp
struct Add {
    int operator()(int a, int b) {
        return a + b;
    }
};
function<int(int,int)> f = Add();
```

---

### 🔹 Key Features

* Type-safe
* Flexible (supports multiple callable types)
* Enables runtime polymorphism
* Used in callbacks and APIs

---

### ⚠️ Performance Note

* `std::function` has **overhead** due to type erasure
* May involve **heap allocation**
* Avoid in **performance-critical systems (HFT)**

---

### 🔥 Interview Insights

* Prefer `std::function` over raw function pointers for flexibility
* Avoid it in hot paths due to performance cost

---

### 🚀 One-liner (Interview)

> "std::function is a type-safe polymorphic wrapper for callable objects, but it introduces overhead due to type erasure, so it should be avoided in performance-critical paths."
