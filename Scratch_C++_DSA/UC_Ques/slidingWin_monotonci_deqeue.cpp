#include <iostream>
#include <vector>
#include <deque>

using namespace std;

long long countSubarrays(vector<int>& arr, long long k)
{
    int n = arr.size();

    deque<int> maxDQ;
    deque<int> minDQ;

    int left = 0;
    long long result = 0;

    for(int right = 0; right < n; right++)
    {
        // Maintain max deque
        while(!maxDQ.empty() && arr[maxDQ.back()] < arr[right])
            maxDQ.pop_back();

        maxDQ.push_back(right);

        // Maintain min deque
        while(!minDQ.empty() && arr[minDQ.back()] > arr[right])
            minDQ.pop_back();

        minDQ.push_back(right);

        // Shrink window if cost > k
        while(left <= right &&
             (long long)(arr[maxDQ.front()] - arr[minDQ.front()]) * (right - left + 1) > k)
        {
            if(maxDQ.front() == left)
                maxDQ.pop_front();

            if(minDQ.front() == left)
                minDQ.pop_front();

            left++;
        }

        // Count valid subarrays ending at right
        result += (right - left + 1);
    }

    return result;
}

int main()
{
    vector<int> arr = {1,3,5,8};
    long long k = 5;

    cout << "Valid subarrays = " << countSubarrays(arr, k) << endl;

    return 0;
}