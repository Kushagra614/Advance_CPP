#include <bits/stdc++.h>
using namespace std;

int reverseBits(int n)
{
    // cal the last bit of the n
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        // remove last bit from n
        int dig = (n & 1);
        n = n >> 1;
        // add that last bit to new ans
        ans = (ans << 1) | dig;
    }

    return ans;
}

int main()
{
    int n = 43261596;
    cout<<reverseBits(n);

    return 0;
}