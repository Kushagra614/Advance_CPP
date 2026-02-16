// Mutex: Mutual Exclusion

// RACE CONDITION:
// 0. Race condition is a situation where two or more threads/process happens to change a common data(shared data) at the same time.
// Race condition - it only happens when two or more threads are trying to modify common data.( not if they are only accessing it)
// 1. If there is a race condition then we have to protect it and the protected section is  called critical section/region.

//MUTEX:
// 0. Mtuex is used to avoid the race condition
// 1. We use lock(), unlock(), on the mutex to avoid race condition

// So there are 3 main process that occur during race conditon 
/*
- ALL THESE PROCESSES ARE DONE IN THE ACCUMULATOR REGISTER
- Load -> Loading the variable in the AC register
- Increment (x++) -> (x+1)
- store -> So for eg 2 threads are trying to inc. x at the same time.
        -> They inc the val of x at the same time and modify it to 1
        -> They then store that val of x in the original variable at the same time, now
           now what this does is it allows x to ultimately hold 1 as the val to it



    Critical Section/Region -> is a section of code that accesses shared resources, 
    such as variables or data structures, that can be accessed by multiple threads.
*/

#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>
using namespace std;
mutex m;

// to make the data common we have declared a global varibale
int amt = 0;

void addMoni()
{
    for(int i = 0; i < 1000; i++)
    {
        m.lock();
        ++amt;
        this_thread::sleep_for(chrono::microseconds(2));
        m.unlock();
    }
    
}

int main(){

    thread t1(addMoni);
    thread t2(addMoni);
    t1.join();
    t2.join();

    cout<<amt<<endl;
   return 0;
}

/* What is Happening:
Increment Operation (++amt):

The increment operation is not atomic. It consists of three steps:
Load: The current value of amt is loaded into a register.
Increment: The value in the register is incremented.
Store: The incremented value is written back to amt.
Thread Interference:

When two threads (t1 and t2) execute the ++amt operation simultaneously, 
they may both load the same value of amt before either thread stores its incremented value. This causes one thread's increment to overwrite the other's, resulting in a lost increment.

Lost Increments:

For example:
t1 reads amt = 1000 into its register.
t2 reads amt = 1000 into its register.
Both threads increment their registers to 1001.
t1 writes 1001 back to amt.
t2 writes 1001 back to amt, overwriting t1's update.

The result is that amt is only incremented once, even though both threads performed the increment operation.
Non-Deterministic Behavior:
The exact number of lost increments depends on the timing of thread execution, which is non-deterministic. This is why your output varies slightly between runs (e.g., 1996 or 1998). */