# 📄 05_Constructors.md


# Constructors

## Concept
A constructor is automatically called when an object is created.

## Simple Explanation
It initializes the object.

## Code Example
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void show() {
        cout << brand << " " << speed << endl;
    }
};

int main() {
    Car c("Tesla", 200);
    c.show();
}