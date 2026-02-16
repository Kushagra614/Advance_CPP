// JOIN NOTES
// 0. Once a thread is started we wait for this thread to finish by calling join() function on thread object.
// 1. Double join will result into program termination.
// 2. If needed we should check thread is joinable before joining. ( using joinable() function)

// DETACH NOTES
// 0. This is used to detach newly created thread from the parent thread.
// 1. Always check before detaching a thread that it is joinable otherwise we may end up double detaching and 
//    double detach() will result into program termination.
// 2. If we have detached thread and main function is returning then the detached thread execution is suspended.

// NOTES:
// Either join() or detach() should be called on thread object, otherwise during thread object's destructor it will 
// terminate the program. Because inside destructor it checks if thread is still joinable? if yes then it terminates the program.

#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void fun(int x)
{
    while(x-->0)
    {
        cout<<x<<" Kush"<<endl;
    }
    this_thread::sleep_for(chrono::seconds(3));
}
int main(){

   thread t(fun, 10);
   cout<<"main before\n";
   t.join();


   if(t.joinable()) t.join();
   cout<<"main after\n";

   return 0;
}

/*
    JOINABLE:
        joinable() is a member function of the std::thread class in C++ that checks whether a thread is joinable, 
        meaning that it can be joined with the current thread.

        A thread is joinable if:

        - It has not been joined with another thread yet.
        - It has not been detached from the current thread.
        - It is not the main thread.
        - If a thread is joinable, you can use the join() function to wait for the thread to finish execution and then join it with the current thread.
    

        Here are some conditions under which something might happen if you don't use joinable():

        - Thread is not joinable: If you try to join a thread that is not joinable, the program will terminate.
        - Thread has already been joined: If you try to join a thread that has already been joined, the program will terminate.
        - Thread has been detached: If you try to join a thread that has been detached, the program will terminate.
        - Thread is the main thread: If you try to join the main thread, the program will terminate.
    
        By calling join() or detach() on the thread object, you ensure that the thread is properly cleaned up when the thread object is destroyed, 
        and the program will not terminate unexpectedly.
    */