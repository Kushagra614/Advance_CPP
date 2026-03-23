#include <iostream>
using namespace std;


void greet() {
    cout << "Hello from function pointer!" << endl;
}

int main()
{
    // 1. Wild Pointer (uninitialized)
    int* ptr1;  
    // Don't use *ptr1 (undefined behavior)
    cout << "Wild pointer declared (do not use)" << endl;

    // 2. Void Pointer
    int x = 10;
    void* ptr2 = &x;
    cout << "Void pointer value: " << *(static_cast<int*>(ptr2)) << endl;
    cout << "Void pointer value: " << ptr2 << endl;

    // 3. Dangling Pointer
    int* ptr3 = new int(20);
    delete ptr3;       // memory freed
    ptr3 = nullptr;    // fix dangling pointer
    cout << "Dangling pointer handled safely" << endl;

    // 4. Null Pointer
    int* ptr4 = nullptr;
    if (ptr4 == nullptr) {
        cout << "Null pointer detected" << endl;
    }

    // 5. Function Pointer
    void (*funcPtr)() = greet;
    funcPtr(); // calling function

    return 0;
}