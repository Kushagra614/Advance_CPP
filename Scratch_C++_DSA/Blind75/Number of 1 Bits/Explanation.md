## Ques:
Given a positive integer n, write a function that returns the number of in its binary representation (also known as the Hamming weight).

## Approach
### BF:
To check whether the last bit of n is 1 or not, I will perform '&' operations between n and 1. If the last bit is 1, then it will return as 1 and the count will be inc. To move forward with the iteration, I will use right shift operator which removes the last bit. This will contnue until n exists.

T.C will be -> O(logn)
S.C will be -> O(1)

### OPT:
Instead of checking every bit, I will directly remove the set bits one by one. I will use the operation n & (n - 1), which removes the rightmost set bit from the number. each iteration removes  one 1, I can inc the count every time this operation is performed. This process will continue until n becomes 0, meaning all set bits have been removed.


T.C will be -> O(1)
S.C will be -> O(1)



