/*
QUES- What do you understand by thread and give one example in c++

ANS- 
1) In every application there is default thread which is main(), inside this we create other threads.
2) A thread is also known as a lightweight process, Idea is to achieve parallelism by dividing a process into multiple threads.
For eg:
    - The browser has multiple tabs which can be diff threads
    - MS word using diff multiple threads to format text, another thread to process inputs(spell checker)
    - vscode for code auto complition

THERE ARE FIVE WAYS TO CREATE THREADS
1) FUNCTION POINTERS
2) LAMBDA FUNCTIONS 
3) FUNCTORS
4) MEMEBER FUNCTIONS 
5) STATIC MEMBER FUNCTIONS

This multithreading has been introduces from C++11

NOTE: IF WE CREATE MULTIPLE THREADS -> THERE IS NO GAURENTEE WHICH THREAD WILL START FIRST
 */



// Find the addition of all odd numbers from 1 to 1900000000 and all even numbers form 1 to 1900000000