#include <bits/stdc++.h>
using namespace std;

mutex mtx;
int counter = 1;
// void add(int x)
// {
//     for(int i = 0; i < 100000; i++)
//     {
//         mtx.lock();
//         x += 1;
//         mtx.unlock();
//     }
//     cout<<x;
// }

void add()
{
    for (int i = 0; i < 100000; i++)
    {
        lock_guard<mutex> lock(mtx);
        counter += 1;
    }
    
}
int main()
{

    int x = 1;
    thread t1(add);
    thread t2(add);

    t1.join();
    t2.join();

    cout<<counter;
    return 0;
}