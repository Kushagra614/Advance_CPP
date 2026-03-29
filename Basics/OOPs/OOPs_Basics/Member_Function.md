# 📄 04_Member_Function.md


# Member Function

## Concept
Member functions define the behavior of a class.

## Simple Explanation
They operate on class data.

## Code Example
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c;
    c.brand = "Audi";
    c.show();
}