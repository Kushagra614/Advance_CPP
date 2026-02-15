/*
QUES- What do you understand by thread and give one example in c++

ANS- 
1) In every application there is default thread which is main(), inside this we create other threads.
2) A thread is also known as a lightweight process, Idea is to achieve parallelism by dividing a process into multiple threads.
For eg:
    - The browser has multiple tabs which can be diff threads
    - MS word using diff multiple threads to format text, another thread to process inputs(spell checker)
    - vscode for code auto complition

THERE ARE FIVE WAYS TO CREATE THREADS (C++11)
1) FUNCTION POINTERS
2) LAMBDA FUNCTIONS 
3) FUNCTORS
4) MEMBER FUNCTIONS 
5) STATIC MEMBER FUNCTIONS

This multithreading has been introduced from C++11

NOTE: IF WE CREATE MULTIPLE THREADS -> THERE IS NO GAURENTEE WHICH THREAD WILL START FIRST
 */



// Find the addition of all odd numbers from 1 to 1900000000 and all even numbers form 1 to 1900000000

#include <iostream>
#include <thread>
#include <chrono>
#include <cstdint>
using namespace std;
using ull = unsigned long long;
ull evenSum, oddSum;

void findeven(ull s, ull e) {
    for (ull i = s; i <= e; i++) {
        if((i & 1) == 0) evenSum += i;
    }
}

void findodd(ull s, ull e) {
    for (ull i = s; i <= e; i++) {
        if((i & 1) == 1) oddSum += i;
    }
}

int main() {
    ull s = 0;
    ull e = 1900000000;

    //time
    auto st = chrono::high_resolution_clock::now();

    // using threads
    std::thread t1(findeven,s,e);
    std::thread t2(findodd,s,e);

    t1.join();
    t2.join();

    // findeven(s,e);
    // findodd(s,e);

    auto et = chrono::high_resolution_clock::now();
    auto Ttime = chrono::duration_cast<chrono::milliseconds>(et-st);

    cout<<"EvenSum: "<<evenSum<<endl;
    cout<<"OddSum: "<<oddSum<<endl;
    cout<<"Time: "<<Ttime.count()<<"ms"<<endl;

    return 0;
}

