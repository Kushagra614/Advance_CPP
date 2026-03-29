# 📄 03_Access_Modifiers.md


# Access Modifiers

## Concept
Access modifiers control who can access variables and functions.

## Types
- private → only inside class  
- protected → class + derived class  
- public → anywhere  

## Code Example
```cpp
#include <iostream>
using namespace std;

class Example {
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

    int getA() {
        return a;
    }
};

int main() {
    Example obj;

    cout << obj.c << endl;
    cout << obj.getA() << endl;
}