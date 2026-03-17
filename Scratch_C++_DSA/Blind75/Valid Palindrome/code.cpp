#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (!isalnum(s[i]))
            {
                i++;
            }
            else if(!isalnum(s[j]))
            {
                j--;
            }
            else
            {
                if(tolower(s[i]) == tolower(s[j]))
                {
                    i++;
                    j--;
                }
                else
                {
                    return false;
                }
                
            }
            
        }
        return true;
    }

int main()
{
    string s = "A man, a plan, a canal: Panama";
    int n = s.size();
    if(isPalindrome(s))
    {
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }


    return 0;
}