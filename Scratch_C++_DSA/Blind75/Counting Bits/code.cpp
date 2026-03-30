#include <bits/stdc++.h>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
vector<int> countBits(int n)
{
    // traverse form 0 to n
    // vector<int> res;
    // for each i, calculate the no. of set bits
    // for (int i = 0; i <= n; i++)
    // {
    //     int ans = setBits(i);
    //     // store them in an ans array
    //     res.push_back(ans);
    // }

    //         return res;
    // }

    vector<int> res(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        res[i] = res[i >> 1] + (i & 1);
    }

    return res;
}

int main()
{
    int n = 5;
    vector<int> ans = countBits(n);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    return 0;
}