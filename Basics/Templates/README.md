Templates in C++ allow writing generic and reusable code that works with multiple data types without duplication. They are resolved at compile time, which means there is no runtime overhead (zero-cost abstraction).

Key points:

* Templates enable generic programming for functions and classes.
* They are resolved at compile time (not runtime).
* Each type creates a separate instantiation of the function/class.
* Improves code reusability and type safety.

Types of Templates:

* Function Templates → Work with generic functions.
* Class Templates → Used in STL (e.g., vector<T>, map<K, V>).

Example:
template <typename T>
T add(T a, T b) {
return a + b;
}

Advanced Interview Points:

* Templates are instantiated at compile time → can increase compile time.
* Supports template specialization (custom behavior for specific types).
* Supports variadic templates (used in modern C++).
* Enables metaprogramming (template metaprogramming - TMP).
* Heavy use in STL (vector, map, unordered_map, etc.).

Important Interview Insight:
Templates provide zero runtime overhead, making them very useful in performance-critical systems like HFT, but excessive use can increase compile time and binary size.
