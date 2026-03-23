#include <iostream>
using namespace std;

// extern (normally in another file)
extern int globalVar;
int globalVar = 100;

// static 
void counter() {
    static int count = 0; // retains value
    count++;
    cout << "Count: " << count << endl;
}

class Test {
public:
    mutable int x = 10; // mutable 
};

class Base final {}; // final 

int main()
{
    // auto (type inference)
    auto a = 10;
    cout << "auto value: " << a << endl;

    // static
    counter();
    counter();
    counter();

    // extern
    cout << "extern value: " << globalVar << endl;

    // mutable
    const Test obj;
    obj.x = 20;
    cout << "mutable value: " << obj.x << endl;

    return 0;
}