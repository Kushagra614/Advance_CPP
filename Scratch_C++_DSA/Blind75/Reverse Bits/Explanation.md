## Ques
Given a number, reverse its 32-bit binary representation.

## Approach
### OPT
To reverse the bits, I process the number bit by bit from right to left. In each iteration, I extract the last bit of n using n & 1. Then I shift n to the right to move to the next bit. At the same time, I build the answer from l to r, To do that, I shift the current answer to the left (ans << 1) to make space, and then add the extracted bit using OR.
Since the number is treated as a 32-bit integer, I repeat this process exactly 32 times, even if n becomes 0 early. This ensures that all bits, including leading zeros, are handled correctly.

TC -> O(1)
SC -> O(1)