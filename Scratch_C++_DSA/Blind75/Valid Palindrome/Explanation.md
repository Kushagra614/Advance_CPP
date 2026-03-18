## Ques:
Given a string s, return true if it is a palindrome, or false otherwise.

## Aproaches
### OPT:
So here in the input given we can see that we have some non aplha-numeric chars and some chars in uppercase. We will start by moving through the array from the start and from the end ( using 2 iterators ). Then we will check that if that char is not alphanumeric, we will skip it and move forward. we will do this for both the iterators. If the chars are alphanumeric then we will convert them into lowercase ans check, if they are equal, we will move ahead moving both the iterators ahead. If they are not equal we will return false as they are not Palindromic. If after the whole iteration all are same, it means that the str is a palindorme and return true;

The T.C of this approach will be -> O(n)  
The S.C of this approach will be -> O(1)