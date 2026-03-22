#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout<< add(5,9);
    cout<<endl;
    cout<< add(8.432 , 9.21);
    cout<<endl;
}