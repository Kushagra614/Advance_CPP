#include<bits/stdc++.h>
using namespace std;

class Work{
    public:
    string name;
    Work(string input)
    {
        name = input;
    }

    void doWork()
    {
        cout<<"My name is: "<<name<<endl;
    }
    
};

int main(){
   
    string name = "Kush";
   Work obj(name);
   obj.doWork(); 
   return 0;
}