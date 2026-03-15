/*
Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times in the segmentation.


subparts 
1) break the string and substrs 
2) check if subtrs are present in dict
 

Example 1:

Input: s = "leetcode", wordDict = ["leet","code"]
Output: true


opt
-> 
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(int i, string& s, vector<int>& dp, unordered_set<string>& dict)
{
    //base case
    if(i == s.size())
    {
        return true;
    }

    //checking the stored ans
    if(dp[i] != -1)
    {
        return dp[i];
    }

    string curr = "";

    for(int j = i; j<s.size(); j++)
    {
        curr += s[j];
        if(dict.count(curr))
        {
            if(solve(j + 1, s, dp, dict)){
                return dp[i] = true;
            }
        }
    }

    dp[i] = false;
    return dp[i];

    
}

int main()
{
    string s = "leetcode";
    vector<string>Wdict = {"leet", "curr"};
    vector<int>dp(s.size(), -1);
    unordered_set<string>dict(Wdict.begin(), Wdict.end());
    if(solve(0,s,dp,dict))
    {
        cout<<"True";
    }
    else{
        cout<<"false";
    }

    return 0;
}