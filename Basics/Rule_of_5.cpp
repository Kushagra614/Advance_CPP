#include <bits/stdc++.h>
using namespace std;

class Rule
{
    int *ptr;

public:
    Rule(int val)
    {
        ptr = new int(val);
        cout<<"Para Ctor\n";
    }

    ~Rule(){ cout<<"Dtor\n";
        delete ptr ;}

    Rule(const Rule& other)
    {
        ptr = new int(*other.ptr);
        cout<<"Copy Ctor\n";
    }

    Rule(Rule&& other) noexcept {
        this->ptr = other.ptr;
        other.ptr = nullptr;
        cout<<"Move Ctor\n";

    }

    Rule& operator=(const Rule& other)
    {
        cout<<"Copy ass\n";
        if(this == &other) return *this;
        delete ptr;
        ptr = new int(*other.ptr);
        return *this;
        
    }

    Rule& operator=(Rule&& other) noexcept
    {
        cout<<"move ass\n";
        if(this == &other) return *this;
        delete ptr;
        ptr = other.ptr;
        other.ptr = nullptr;
        return *this;
        
    }


};


int main()
{
    // Rule obj1(10); // default para ctor
    // Rule obj2 = obj1; //copy ctor
    // Rule obj3 = move(obj1);// move ctor
    // Rule obj4(50);
    // obj4 = obj2; //copt ass
    // obj1 = move(obj4); // move ass;

    vector<int>arr1 = {1,2,3,4,5};
    vector<int>arr2 = {0,0,0,0,0};
    for(auto i : arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : arr2)
    {
        cout<<i<<" ";
    }
    cout<<"\n\n\n";
    arr2 = move(arr1);

    for(auto i : arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : arr2)
    {
        cout<<i<<" ";
    }



    return 0;
}