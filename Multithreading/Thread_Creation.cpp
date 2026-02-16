/* Five different types for creating threads


 1. Function Pointer -- this is the very basic form of creating threads.

 2. Lambda Function

 3. Functor (Function Object)

 4. Non-static member function

 5. Static member functions


 1) FUNCTION POINTER;

 THIS IS THE VERY BASIC FORM OF THREAD CREATION */

#include<iostream>
#include<thread>
#include<chrono>
using namespace std;



/*-- 1) FUNCTION POINTER ------------------------------------------------------*/

// void add(int x)
// {
//     for(int i = 0; i < 10; i++)
//     {
//         x += 1;
//     }
//     cout<<x<<endl;
// }

// int main()
// {
//     thread t1(add, 10);
//     thread t2(add, 10);
//     t1.join();
//     t2.join();

//     return 0;
// }


/*-- 2) LAMBDA FUNCTIONS -------------------------------------------------------*/

// int main()
// {
  
    // auto fun = [](int x)
    // {
    //     for(int i = 0; i < 10; i++)
    //     {
    //         x += 1;
    //     }
    //     cout<<x<<endl;
    // };

  // we can directly inject lambda at thread creation time
//     thread t1([] (int x)
//     {
//         while(x-->0)
//         {
//             cout<<x<<endl;
//         }
//     }, 10);
    

//     t1.join();

//     return 0;
// }



/*-- 3) FUNCTORS (Function Objects) ---------------------------------------------*/

// class Base{
//     public:
//     void operator()(int x){
//         while(x--> 0){
//             cout<<x<<endl;
//         }
//     }
// };

// int main()
// {
//     thread t((Base()), 10);
//     t.join();

//     return 0;
// }

/* The void operator()(int x) function is an overloaded function call operator. Here's a detailed explanation of what it does and why () appears after another ():

1. What is operator()?
operator() is a special operator in C++ that allows an object to be called like a function.
When you define operator() in a class, you make the class a functor (function object).
A functor is an object that can be invoked like a function.
2. Why () After Another ()?
The first () is part of the operator() definition:

This defines how the object behaves when it is "called" like a function.

The second () is used when you actually invoke the object:

Here:

Base() creates a temporary object of the Base class.
t is a thread that calls the operator() function of the Base object with the argument 10.
3. How It Works in Your Code:
The Base class has an operator() function that takes an integer x as an argument.

When you create a thread with Base():

The Base object is created.
The operator() function is called with x = 10.
Inside operator():

The loop decrements x and prints its value until x becomes 0.
4. Why Use operator()?
Using operator() makes the class behave like a function, which is useful for:
Passing objects to threads.
Creating reusable function-like objects with state.
Simplifying code by avoiding the need to explicitly call a member function.
 */


/*-- 4) NON-STATIC MEMBER FUNCTION ----------------------------------------------*/

// class Base{
//     public:
//     void fun(int x)
//     {
//         while(x--> 0)
//         {
//             cout<<x<<endl;
//         }
//     }
// };

// int main()
// {
//     Base b;
//     thread t1(&Base::fun, &b, 10);
//     t1.join();

//     return 0;
// }


/* ->Key Points About Non-Static Member Functions in Threads:
Non-static member functions require an object to be called on.
You must pass both the function pointer (&Base::fun) and the object pointer (&b) to the thread.
The thread will call the function on the specified object.

Why Use &?
The & is used to:

Get the Address of the Member Function:
&Base::fun is a pointer to the fun function.
Get the Address of the Object:
&b is the address of the object b.
Without the &, the compiler would not know that you are referring to the address of the member function or the object. */



/*-- 5) STATIC MEMBER FUNCTION -------------------------------------------------*/

class Base{
    public:
    static void fun(int x)
    {
        while(x--> 0)
        {
            cout<<x<<endl;
        }
    }
};

int main()
{
    thread t(&Base::fun, 10);
    t.join();

    return 0;
}

/* A static member function in C++ is a function that belongs to a class rather than any specific object of the class. It is declared using the static keyword and has the following characteristics:

1. Key Characteristics of Static Member Functions:
No Object Association:

A static member function does not operate on an instance of the class. It is called on the class itself, not on an object.
It cannot access non-static members (variables or functions) of the class because it does not have access to the this pointer.
Shared Across All Objects:

Static member functions are shared among all objects of the class. They are not tied to any specific object.
Can Be Called Without an Object:

You can call a static member function using the class name, without creating an object of the class.
Can Access Only Static Members:

Static member functions can only access other static members (variables or functions) of the class. */
