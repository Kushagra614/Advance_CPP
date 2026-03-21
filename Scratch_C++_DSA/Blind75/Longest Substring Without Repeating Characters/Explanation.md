## Ques
Given a string s, find the length of the longest substring without duplicate characters.

## Approach
### OPT
Ok, in order to solve this problem in linear time. I will create a map to store the char and its index, while iterating through the string, for each char i will check, that if it exists in the map or not. If it does then it means that, its a duplicate. I will have 2 pointers which will help me maintain the window. After finding that element in the map, if will check that if tha starting od the index is greater than or equal to the index of the element found. If it is, then we will increament i ahead of the index of the ele found. Then we will calculate the size by the size of the window. It will be compared the maxLen and keeps on being updated.

This is the how the whole string will be iterated, and finally we will be have the ans;

T.C for this will be => O(n)
S.C for this will be -> O(m) m is the size of the map