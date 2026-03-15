// Few things to remember about the try_lock is as follows:
// 0. std::try_lock() tries to lock all(lockable objs) the mutex passed in it one by one in given order.
// 1. On success this function returns -1 otherwise it will return 0-based mutex index number which it could not lock.
// 2. If it fails to lock any of the mutex then it will release all the mutex it locked before.
// 3. If a call to try_lock results in an exception, unlock is called for any locked objects before re-throwing.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex m1, m2;

void fun(int threadID)
{
    int result = try_lock(m1,m2);
    if(result == -1)
    {
        cout<<"Thread "<<threadID<<" has locked the mutexes"<<endl;
        //critical sec
        cout<<"Thread "<<threadID<<" is Doing imp Workkkk"<<endl;

        //unlock both the mutexes
        m1.unlock();
        m2.unlock();
    }

    else{
        cout<<"Thread "<<threadID<<" Failed to lock both the mutexes"<<endl;
    }
}

int main(){

    thread t1(fun,1);
    thread t2(fun, 2);

    t1.join();
    t2.join();
    return 0;
}
