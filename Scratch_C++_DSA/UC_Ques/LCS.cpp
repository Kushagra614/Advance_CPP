/*
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
    For example, "ace" is a subsequence of "abcde".

A common subsequence of two strings is a subsequence that is common to both strings.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  


*/

#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, string str1, string str2)
{
    //base case


    if(i == str1.length() || j == str2.length())
    {
        return 0;
    }

    //rec relation
    if(str1[i] == str2[j])
    {
        return 1 + solve(i+1, j+1, str1, str2);
    }

    int skip1 = solve(i+1, j, str1, str2);
    int skip2 = solve(i, j+1, str1, str2);

    return max(skip1, skip2);

}


int solveDPmemo(int i, int j, vector<vector<int>>&dp, string str1, string str2)
{
    //base case
    if(i == str1.length() || j == str2.length())
    {
        return 0;
    }

    //check the stroed ans
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    //rec relation
    if(str1[i] == str2[j])
    {
        return dp[i][j] = 1+ solveDPmemo(i+1, j+1, dp, str1, str2);
    }

    auto skip1 = solveDPmemo(i+1, j, dp,str1, str2);
    auto skip2 = solveDPmemo(i, j+1, dp,str1, str2);

    return dp[i][j] = max(skip1, skip2);


}

int main()
{
    string str1 = "abcde";
    string str2 = "ace";
    int n = str1.size();
    int m = str2.size();
    // int ans = solve(0,0,str1, str2);
    vector<vector<int>>dp(n, vector<int>(m, -1));
    int ans = solveDPmemo(0,0,dp,str1,str2);
    cout<<ans;
    return 0;
}