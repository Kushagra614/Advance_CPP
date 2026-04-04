## QUES:
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

## APPROACH:
### BF
I will put all the ele in a mp. Then I will loop, from 0 to n, and check that every num in the range in mp. Whatever num which is not present in mp will be the ans.

TC - O(n)
SC - O(n) 

