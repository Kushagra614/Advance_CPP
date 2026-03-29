/*
Virtual Constructor (Not in C++)
C++ does not support virtual constructors because constructors are responsible
for object creation, and virtual functions require an existing object.

Alternative Approach (Factory Method Pattern)
Since constructors can't be virtual, we can use a factory method to return objects
dynamically.


*/

#include<bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual Base* create() { return new Base(); }
    virtual void show() { cout << "Base Class" << endl; }
    virtual ~Base() {}
};

class Derived1 : public Base {
public:
    Derived1* create() override { return new Derived1(); }
    void show() override { cout << "Derived1 Class" << endl; }
};

class Derived2 : public Base {
public:
    Derived2* create() override { return new Derived2(); }
    void show() override { cout << "Derived2 Class" << endl; }
};

// THIS is the function that justifies everything
// it has NO idea what type it receives
void cloneAndShow(Base* b) {
    Base* clone = b->create(); // always creates the RIGHT type
    clone->show();
    delete clone;
}

int main() {
    int choice;
    cin >> choice; // type decided at RUNTIME

    Base* obj;
    if (choice == 1) obj = new Derived1();
    else if (choice == 2) obj = new Derived2();
    else obj = new Base();

    cloneAndShow(obj); // works correctly for ALL types ✅
    delete obj;
}

