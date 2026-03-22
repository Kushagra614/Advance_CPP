#include<iostream>
using namespace std;

// ---------- Typedef ----------
typedef unsigned int uint;

// ---------- Modern using ----------
using ull = unsigned long long;

// ---------- Macro ----------
#define PI 3.14159
#define AREA_MACRO(r) (PI * (r) * (r))

// ---------- Better Alternative ----------
constexpr double PI_CONST = 3.14159;

inline double area(double r)
{
    return PI_CONST * r * r;
}

int main()
{
    //Typedef usage 
    uint age = 25;
    cout<<"Age (typedef uint): "<<age<<endl;

    //Using usage
    ull bigNum = 123456789;
    cout<<"Big Number (using ull): "<< bigNum <<endl;

    // Macro usage
    cout << "Area using macro: " << AREA_MACRO(5) << endl;

    // Correct version
    cout << "Correct area using function: " << area(5) << endl;
    
    return 0;
    
}