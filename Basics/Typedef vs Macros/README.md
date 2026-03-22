## 📌 Typedef vs Macros (C++ Interview Notes)

### 🔹 Typedef

* `typedef` creates an alias for an existing data type.
* Improves readability and maintainability.
* Handled by the compiler → **type-safe**.

**Example:**

```cpp
typedef unsigned int uint;
uint age = 25; // same as unsigned int
```

### 🔹 Modern Alternative (`using`)

* Preferred in modern C++ (C++11+)
* More readable and flexible

**Example:**

```cpp
using uint = unsigned int;
```

---

### 🔹 Macros

* Processed by the **preprocessor** (before compilation)
* Perform **text substitution** (no type checking)
* Can cause unexpected bugs

**Example:**

```cpp
#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
```

---

### ⚠️ Important Differences

| Feature          | Typedef / using | Macros       |
| ---------------- | --------------- | ------------ |
| Type Safety      | ✅ Yes           | ❌ No         |
| Processing Stage | Compiler        | Preprocessor |
| Scope Rules      | ✅ Yes           | ❌ No         |
| Debugging        | Easier          | Harder       |

---

### 🔥 Interview Insights

* Prefer `using` over `typedef` in modern C++.
* Avoid macros when possible.
* Macros are not type-safe and can introduce subtle bugs.

---

### 💣 Classic Macro Trap

```cpp
#define SQR(x) x*x

cout << SQR(2+3);
```

👉 Output: `11` ❌ (not 25)

Reason:

```
2 + 3 * 2 + 3
```

---

### ✅ Better Modern Alternative

```cpp
constexpr double PI = 3.14159;

inline double area(double r) {
    return PI * r * r;
}
```

---

### 🚀 One-liner (Use in Interviews)

> "Macros are powerful but unsafe due to lack of type checking, while modern C++ replaces them with constexpr, inline functions, and templates for safer and cleaner code."
