/*
 Few important points to remember about the unique_lock is as follows:
1. The class unique_lock is a mutex ownership wrapper.
2. It Allows:
     a. Can Have Different Locking Strategies
     b. time-constrained attempts at locking (try_lock_for, try_lock_until)

          SYNTAX-   unique_lock<mutex> lock(mtx,defer_lock);
                    if (lock.try_lock_for(chrono::seconds(1))) {
                         Lock acquired within 1 second
                    } else {
                         Lock not acquired within 1 second
                    }

     c. recursive locking
     d. transfer of lock ownership (move not copy)
     e. condition variables. (See this in coming videos)

      -Locking Strategies-
    TYPE           EFFECTS(S)

 1. defer_lock     do not acquire ownership of the mutex.
 2. try_to_lock    try to acquire ownership of the mutex without blocking.
 3. adopt_lock     assume the calling thread already has ownership of the mutex.

SYNTAX : unique_lock<mutex>lock(m);
*/

#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

timed_mutex mtx;
int buffer = 0;

void task(const char* k)
{
    unique_lock<timed_mutex>lock(mtx);
    if(mtx.try_lock_for(chrono::seconds(1)))
    {
        for(int i = 0; i < 10; i++)
    {
        buffer++;
        cout<<"Thread ID: "<<k<<"-> "<<buffer<<endl;
    }
    }
    
}
int main(){

    thread t1(task, "1");
    thread t2(task, "2");

    t1.join();
    t2.join();

    return 0;
}
