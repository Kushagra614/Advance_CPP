# Class vs Object

## Concept
A class is a blueprint or template used to define properties and behavior, while an object is an actual instance of that class with real values.

## Simple Explanation
Think of a class like a blueprint of a car, and an object as an actual car built from that blueprint.

## Code Example
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "BMW";
    c1.speed = 200;
    c1.showDetails();
}


---
