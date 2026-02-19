/*
Few points to remember about the lock_guard is as follows:
0. It is very light weight wrapper for owning mutex on scoped basis.
1. It acquires mutex lock the moment you create the object of lock_guard.
2. It automatically removes the lock (unlocks) if it goes out of scope.(RAII)
3. You can not explicitly unlock the lock_guard.
4. You can not copy lock_guard.
5. It is RAII class (Resource Aquisition and Initialisation) -> it aquires the lock in its ctor 
   and releases it in its dtor
6. If an exception is thrown at the critical section -> the lock_guard obj will be
   destroyed, unlocking the mutex.

SYNTAX: lock_guard<mutex>lock(m);
*/

#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

mutex mtx;
int buffer = 0;

void inc(int i)
{
    lock_guard<mutex>lock(mtx);
    for(int i = 0; i< 100000; i++)
    {
        buffer++;
        this_thread::sleep_for(chrono::microseconds(2));
        
    }
}

int main(){

    thread t1(inc, 1);
    thread t2(inc, 2);

    t1.join();
    t2.join();

    cout<<buffer<<endl;
   return 0;
}

