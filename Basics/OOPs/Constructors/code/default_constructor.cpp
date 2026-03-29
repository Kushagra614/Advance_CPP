#include<bits/stdc++.h>
using namespace std;

class Work{
    public:
    Work()
    {
        cout<<"Default Ctor"<<endl;
    }
    void dowork()
    {
        cout<<"My name is: Kush"<<endl;
    }
};

int main(){
   
   Work obj;
   obj.dowork(); 
   return 0;
}