#include<iostream>
#include<functional>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int main(){

    //using it normal fn
    function<int(int,int)> f= add;
    cout<<f(2,3)<<endl;

    //using it with lambda fn
    function<int(int,int)> f2 = [](int a, int b)
    {
        return a+b;
    };
    cout<<f2(2,3)<<endl;
    
    return 0;
}