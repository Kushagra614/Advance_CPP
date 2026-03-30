## Ques:
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

## Approach 
### OPT:
I iterated through all the num from 0 to n. For each n, I calculate the no. of set bits. I calcukate them by using the operation n & (n - 1), which removes the rightmost set bit from the number. each iteration removes  one 1. This gives me the no. of set bits. Then for each iteration I store the val in a ans array.

TC -> O(nlogn)
SC -> O(1) excluding the ans array