#include<bits/stdc++.h>
using namespace std;

    bool isAnagram(string& s, string& t) {
        int n = s.size();
        int m = t.size();
        if (n != m)
            return false;

        unordered_map<char, int> sm;
        for (auto& i : s) {
            sm[i]++;
        }

        for (int i = 0; i < t.size(); i++) {
            if (!sm.empty() && sm.count(t[i])) {
                sm[t[i]]--;
                if (sm[t[i]] == 0)
                    sm.erase(t[i]);
            } else {
                return false;
            }
        }

        if (sm.empty())
            return true;
        else
            return false;
    }

    bool isthere(int i)
    {
        unordered_set<int>st;
        if(st.find(i) == st.end())
        {
            return true;
        }
        else{
            return false;
        }

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size();
        vector<vector<string>> res;
        vector<string> ans;
        for (int i = 0; i < len; i++) 
        {
            if(isthere(i))
            {
                ans.push_back(strs[i]);
            }
            for (int j = i + 1; j < len; j++) 
            {
                if (isAnagram(strs[i], strs[j])) 
                {
                    ans.push_back(strs[j]);
                }
            }
            res.push_back(ans);
        }
        return res;
    }

int main(){

    vector<string>strs = {"eat","tea","tan","ate","nat","bat"};
    // vector<vector<string>>res = groupAnagrams(strs);
    // for(auto i : res)
    // {
    //     for(auto j : i)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    sort(strs.begin(), strs.end());
    for(auto i : strs)
    {
        cout<<i<<" ";
    }


   return 0;
}