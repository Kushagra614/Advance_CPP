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
We don’t use `catch` inside the function (`dof`) because the function’s job is only to detect an error and throw an exception, not to decide how to handle it. Instead, the exception is allowed to propagate upward (this is called exception propagation) to the caller (`main`), where better decisions can be made.

Key points:

* The function (`dof`) focuses only on detecting errors and throwing exceptions.
* Handling is done at a higher level (`main`) where more context is available.
* This improves flexibility (e.g., logging, retrying, or terminating).
* Catching inside the function can hide errors from the caller.
* Follows the principle: “throw where you detect, catch where you can handle.”

*/