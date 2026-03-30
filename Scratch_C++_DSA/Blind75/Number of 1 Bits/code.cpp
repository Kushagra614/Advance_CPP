#include <bits/stdc++.h>
using namespace std;

int hammingWeight(int n)
{
    // calculate the n to bin
    //  perform & operation between n and 1-> if the last bit will be 1 ( 1
    //  will return and count will inc)
    // then remove the  last bit using right shift operator

    int count = 0;
    while (n)
    {
        if ((n & 1) == 1)
            count++;
        n = n >> 1;
    }
    return count;

    // THIS IS CAN BE DONE IN O(1)
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{

    int n = 11;
    cout << hammingWeight(n) << endl;
    return 0;
}