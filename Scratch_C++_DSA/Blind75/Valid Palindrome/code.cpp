#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.size();
    string t = "";
  

    for (int k = 0; k < n; k++)
    {
        if (isalpha(s[k]) && s[k] != ' ')
        {
            t += tolower(s[k]);
        }
    }

      int i = 0;
    int j = t.size() - 1;
    while (i < j)
    {
        if (t[i] == t[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    int n = s.size();
    // string t = "";
    // for (int k = 0; k < n; k++)
    // {
    //     if (isalpha(s[k]) && s[k] != ' ')
    //     {
    //         t += tolower(s[k]);
    //     }
    // }

    // cout<<t;

    bool ans = isPalindrome(s);
    cout<<ans;


    return 0;
}