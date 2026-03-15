#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int countSubarraysWithCostLessThanOrEqualK(const vector<int>& arr, long long k) {
    int n = arr.size();
    int count = 0;

    // Iterate over all starting points of subarrays
    for (int start = 0; start < n; ++start) {
        int maxElement = arr[start];
        int minElement = arr[start];

        // Iterate over all ending points of subarrays starting at 'start'
        for (int end = start; end < n; ++end) {
            // Update max and min for the current subarray
            maxElement = max(maxElement, arr[end]);
            minElement = min(minElement, arr[end]);

            // Calculate the cost = (max - min) * length of subarray
            long long length = end - start + 1;
            long long cost = static_cast<long long>(maxElement - minElement) * length;

            // If cost <= k, increment the count
            if (cost <= k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 3, 5, 8};
    long long k = 10;

    int result = countSubarraysWithCostLessThanOrEqualK(arr, k);
    cout << "Number of subarrays with cost <= k: " << result << endl;

    return 0;
}