## Ques

Given a string containing brackets like `()`, `{}`, and `[]`, check whether the brackets are valid. A string is valid if every opening bracket is properly closed in the correct order.

## Approach
### OPT
So I go through the string one character at a time. Whenever I see an opening bracket, I store it. When I see a closing bracket, I check if there was an opening bracket before it. If there wasn’t, then it’s invalid. If there was, I check whether both of them match properly. If they match, I remove it since it’s balanced. If they don’t match, I return false.
After going through the whole string, if nothing is left, then everything was matched correctly, so I return true. Otherwise, if something is still left, it means some brackets were not closed, so I return false.

The T.C will be -> O(n)
The S.C will be -> O(n)
