#include<bits/stdc++.h>
using namespace std;

    bool canAttend(vector<vector<int>> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int>ans;
        ans = arr[0];
        
        for(int i = 1; i < n; i++)
        {
            if(ans[1] > arr[i][0])
            {
                return false;
            }
            ans[0] = arr[i][0];
            ans[1] = arr[i][1];
        }
        return true;
    }

int main(){

    vector<vector<int>>arr = {{1,4}, {10, 15}, {7,10}};
    if(canAttend(arr))
    {
        cout<<"True";
    }
    else {
        cout<< "False";
    }
   return 0;
}