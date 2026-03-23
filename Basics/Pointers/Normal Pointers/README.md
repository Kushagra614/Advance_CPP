## 📌 Types of Pointers in C++

> Pointers store the memory address of variables and are fundamental for low-level memory manipulation in C++.

---

### 🔹 1. Void Pointer (Generic Pointer)

* A `void*` pointer can store the address of any data type.
* It does not have a specific type, so it cannot be directly dereferenced.
* Requires **explicit type casting** before accessing the value.

---

### 🔹 2. Wild Pointer

* A pointer that is **declared but not initialized**.
* Points to a random memory location.
* Dereferencing it leads to **undefined behavior**.

💡 Best Practice:

* Always initialize pointers (e.g., set to `nullptr`).

---

### 🔹 3. Dangling Pointer

* A pointer that points to **memory that has been freed or deleted**.
* Accessing it leads to **undefined behavior** and potential crashes.

💡 Best Practice:

* After deleting memory, set the pointer to `nullptr`.

---

### 🔹 4. Null Pointer

* A pointer explicitly initialized to `nullptr`.
* Indicates that the pointer does not point to any valid memory.
* Safe to check before dereferencing.

---

### 🔹 5. Function Pointer

* Stores the address of a function.
* Can be used to call functions dynamically.
* Useful in callbacks and flexible program design.

---

### ⚠️ Common Pitfalls

* Dereferencing wild or dangling pointers → **undefined behavior**
* Forgetting to initialize pointers
* Not resetting pointers after `delete`

---

### 🔥 Interview Insights

* Always mention **undefined behavior** when talking about wild/dangling pointers.
* Prefer `nullptr` over `NULL` (modern C++).
* Pointer safety is critical in **low-latency and systems programming**.

###
