#include<bits/stdc++.h>
using namespace std;

bool better(string &s, string &t)
{
    unordered_map<char,int>sm;
    unordered_map<char,int>tm;

    for(auto &i : s) sm[i]++;
    for(auto &i : t) tm[i]++;

    if(sm == tm) return true;
    else return false;
}

bool opt(string &s, string &t)
{
        int n = s.size();
        int m = t.size();
        if(n != m) return false;

        unordered_map<char, int>sm;
        for(auto &i : s)
        {
            sm[i]++;
        }

        for(int i = 0; i < t.size(); i++)
        {
            if(!sm.empty() && sm.count(t[i]))
            {
                sm[t[i]]--;
                if(sm[t[i]] == 0) sm.erase(t[i]);
            }
            else
            {
                return false;
            }
        }

        if(sm.empty())return true;
        else return false;
}

bool bruteF(string &s, string &t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) return true;
    else return false;
}

int main(){
   
    string s = "anagram";
    string t = "nagaram";
    if(opt(s, t))
    {
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }

   return 0;
}