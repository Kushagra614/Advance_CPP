#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int *marks;

    Student(int x, string n)
    {
        name = n;
        marks = new int(x);
    }

    // Student(const Student&s)
    // {
    //     name = s.name;
    //     marks = new int(*(s.marks)); // deep copy
    // }

    void show()
    {
        cout<<name<<": "<< *marks<< endl;
    }

    ~Student()
    {
        cout<<"Dtor called"<<endl;
        delete marks;
    }
};

int main()
{
    Student o1(80, "Kush");
    Student o2 = o1;

    // o1.show();
    // o2.show();

    //due to deep copy we can change the val also
    // *(o2.marks) = 90;

    o1.show();
    o2.show();
}