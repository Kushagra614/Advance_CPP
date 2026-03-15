// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> firstNegative(vector<int>& arr, int k)
// {
//     int n = arr.size();

//     vector<int> result;

//     for(int i = 0; i <= n - k; i++)
//     {
//         int firstNeg = 0;

//         for(int j = i; j < i + k; j++)
//         {
//             if(arr[j] < 0)
//             {
//                 firstNeg = arr[j];
//                 result.push_back(firstNeg);
//                 break;
//             }
//         }

        
//     }

//     return result;
// }

// int main()
// {
//     vector<int> arr = {12,-1,-7,8,-15,30,16,28};

//     int k = 3;

//     vector<int> ans = firstNegative(arr, k);

//     for(int num : ans)
//     {
//         cout << num << " ";
//     }

//     return 0;
// }


//  opt

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> firstNegative(vector<int>& arr, int k)
{
    int n = arr.size();

    deque<int> dq;

    vector<int> result;

    for(int i = 0; i < n; i++)
    {
        // push negative numbers
        if(arr[i] < 0)
            dq.push_back(i);

        // remove elements outside window
        if(!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // window becomes valid
        if(i >= k - 1)
        {
            if(dq.empty())
                result.push_back(0);
            else
                result.push_back(arr[dq.front()]);
        }
    }

    return result;
}

int main()
{
    vector<int> arr = {12,-1,-7,8,-15,30,16,28};
    int k = 3;

    vector<int> ans = firstNegative(arr, k);

    for(int x : ans)
        cout << x << " ";

    return 0;
}