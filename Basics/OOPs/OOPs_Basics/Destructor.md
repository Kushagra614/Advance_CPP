# 📄 06_Destructor.md


# Destructor

## Concept
A destructor is called when an object is destroyed.

## Simple Explanation
It is used to free resources.

## Code Example
```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo d;
}