#include<bits/stdc++.h>
using namespace std;

bool opt(string &s, string &t)
{
    unordered_map<char,int>sm;
    unordered_map<char,int>tm;

    for(auto &i : s) sm[i]++;
    for(auto &i : t) tm[i]++;

    if(sm == tm) return true;
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
    if(bruteF(s, t))
    {
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }

   return 0;
}