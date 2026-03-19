#include<bits/stdc++.h>
using namespace std;

int BF(vector<int>& nums)
{
    int n = nums.size();
    int maxPro = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int pro = nums[j] - nums[i];
            maxPro = max(maxPro, pro);
        }
    }
    return maxPro;
    
}

int OPT(vector<int>&nums)
{
    int n = nums.size();
        int maxPro = 0;
        int buy = nums[0];
        int sell = 0;
        for(int i = 1; i < n; i++)
        {
            if(buy < nums[i])
            {
                sell = nums[i];
                int pro = sell - buy;
                maxPro = max(pro, maxPro);
            }
            else
            {
                buy = nums[i];
            }
        }
        return maxPro;
}

int main(){
   vector<int>nums ={7,1,5,3,6,4};  
//    cout<<BF(nums);
   cout<<OPT(nums);
   return 0;
}