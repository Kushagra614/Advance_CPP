// 0. try_lock() Tries to lock the mutex. Returns immediately. On successful lock acquisition returns true otherwise returns false.
// 1. If try_lock() is not able to lock mutex, then it doesn't get blocked (does not wait for the critical section to be unlocked) that's why it is called non-blocking.
// 2. If try_lock is called again by the same thread (double try_lock) which owns the mutex, the behaviour is undefined.
// 3. It is a dead lock situation with undefined behaviour. 
//    (if you want to be able to lock the same mutex by same thread more than one time then -> go for recursive_mutex)

// There are so many try_lock function
// 1. std::try_lock
// 2. std::mutex::try_lock
// 3. std::shared_lock::try_lock
// 4. std::timed_mutex::try_lock
// 5. std::unique_lock::try_lock
// 6. std::shared_mutex::try_lock
// 7. std::recursive_mutex::try_lock
// 8. std::shared_timed_mutex::try_lock
// 9. std::recursive_timed_mutex::try_lock

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int count = 0;
mutex mtx;

void incCount()
{
    for(int i = 0; i < 1000; i++)
    {
        if(mtx.try_lock())
        {
            count++;
            mtx.unlock();
        }
    }
}
int main()
{
    thread t1(incCount);
    thread t2(incCount);
    t1.join();
    t2.join();
    cout<<count<<endl;

    return 0;
}