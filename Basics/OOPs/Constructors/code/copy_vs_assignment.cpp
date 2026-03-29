#include<iostream>
using namespace std;

class Work{
    public:
    int *ptr;

    Work(int x)
    {
        ptr = new int(x);
    }

    Work(const Work&s)
    {
        ptr = new int(*s.ptr);
    }

    Work &operator=(const Work&s)
    {
        //self assignment check
        if(this == &s) return *this;

        //delete old mem
        delete ptr;

        //new mem
        ptr = new int(*s.ptr);

        return *this;

    }

    void show()
    {
        cout<<"The val is: "<<*ptr<<endl;
    }
};

int main(){
    Work obj1(10);
    Work obj2(20);

    obj1.show();
    obj2.show();

    obj2 = obj1;

    obj1.show();
    obj2.show();
   return 0;
}