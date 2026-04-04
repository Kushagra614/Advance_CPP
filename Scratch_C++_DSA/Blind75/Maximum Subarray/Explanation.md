## QUES:
Given an integer array nums, find the subarray with the largest sum, and return its sum.

## APPROACH:
### BF:
I will calculate the sum for each and every subarray, and keep track of the max sum. 

TC - O(n^2)
SC - O(1)

### OPT:
Now in order to avoid the O(n^2). I will iterate the array, and keep a track of the current sum. I will adding the curr ele to the sum and compare it with the maxSum (if needed the maxSum will be updated). As soon as the sum < 0, the sum will be reset to 0. We will keep on throughout the whole array. 

TC- O(n)
SC - O(1)