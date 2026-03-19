#include<bits/stdc++.h>
using namespace std;

    bool isValid(string s) {
        if (s.size() == 1)
            return false;
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
                continue;
            }
            if (!st.empty() && s[i] == ')') {
                char k = st.top();
                st.pop();
                if (k != '(')
                    return false;
            }
            else if (!st.empty() && s[i] == ']') {
                char k = st.top();
                st.pop();
                if (k != '[')
                    return false;
            } else if (!st.empty() && s[i] == '}') {
                char k = st.top();
                st.pop();
                if (k != '{')
                    return false;
            } else {
                return false;
            }
        }
        if (!st.empty())
            return false;
        else
            return true;
    }

int main(){

    string s = "(]";
    // cout<<s[1];
    cout<<isValid(s);
   return 0;
}