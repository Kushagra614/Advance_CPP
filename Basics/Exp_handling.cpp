#include<iostream>
#include<stdexcept>
using namespace std;

void func(int a, int b)
{
    if(b == 0) throw runtime_error("Division by 0 Error");
    cout<<a/b;
}
int main(){

    int a; int b;
    cin>>a>>b;
    try
    {
        func(a,b);
    }
    catch(const std::exception& e)
    {
        cout <<"the Error is: "<<e.what() << '\n';
    }
    
   return 0;
}

/*
We don’t use `catch` inside the function (`dof`) because the function’s job is only to detect an error and throw an exception, 
not to decide how to handle it. Instead, the exception is allowed to propagate upward (this is called exception propagation) to the caller (`main`), where better decisions can be made.

Key points:

* The function (`dof`) focuses only on detecting errors and throwing exceptions.
* Handling is done at a higher level (`main`) where more context is available.
* This improves flexibility (e.g., logging, retrying, or terminating).
* Catching inside the function can hide errors from the caller.
* Follows the principle: “throw where you detect, catch where you can handle.”

*/

/*
We use `const char*` in the `catch` block because the exception being thrown is a string literal (e.g., `"Division by 0 error!"`), 
and in C++, string literals are stored in read-only memory and have the type `const char*`.

Key points:

* A string literal like `"error"` has type `const char*`.
* It is stored in read-only memory, so it cannot be modified.
* Using `const` ensures we do not accidentally try to modify it.
* The `catch` type must match the type that was thrown.
* Writing `char*` instead of `const char*` is unsafe and can lead to undefined behavior.

*/