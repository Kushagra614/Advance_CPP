## Ques:
Given an array nums, return all the unique triplets [nums[i], nums[j], nums[k]] such that their sum is equal to 0.

## Aproaches
### BF:

So here in the input given we have an array of numbers and we need to find all unique triplets whose sum is zero. First, we will sort the array so that we can use the two pointer approach and also handle duplicates easily.
Then we will fix one element using a loop, and for the remaining part of the array we will use two pointers, one starting just after the fixed element and one at the end.
At each step, we calculate the sum of these three elements. If the sum is equal to zero, we store this triplet in a set to avoid duplicates, and move both pointers. If the sum is greater than zero, we move the right pointer to reduce the sum. If the sum is less than zero, we move the left pointer to increase the sum. We keep doing this until the two pointers meet, and repeat the process for all elements.

Finally, we convert the set into a vector and return the result.

The T.C of this approach will be -> O(n^2)
The S.C of this approach will be -> O(n^2)