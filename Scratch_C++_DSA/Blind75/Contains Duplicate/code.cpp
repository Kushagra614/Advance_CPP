#include<bits/stdc++.h>
using namespace std;

int opt(vector<int>&nums)
{
   int n = nums.size();
   unordered_set<int>st(nums.begin(), nums.end());
   if(n != st.size()) return true;
   else return false;
}

int bruteF2(vector<int>& nums)
{
   int n = nums.size();
   sort(nums.begin(), nums.end());
   for(int i = 0; i < n; i++)
   {
      if(nums[i] == nums[i+1])
      {
         return true;
      }
   }
   return false;
}

int main(){
   vector<int>nums = {1,3,4,66,2,5,10, 1};
   if(opt(nums)){
      cout<<"true\n";
   }
   else{
      cout<<"False\n";
   }
   return 0;
}