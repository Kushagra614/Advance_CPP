## Ques:
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

## Aproaches
### OPT:
In order to reduce the time, I will avoid sorting the whole array.First, I will count how many times each number appears. Then, I will go through each (number, count) pair from this stored data. As I pick each pair, I will keep it in a small group of size K. If this group becomes bigger than K, I will remove the one with the smallest count. By doing this again and again, I will always keep only the K most frequent numbers.

The T.C of this approach will be -> O(n) + O(n log k) => O(n logk)  
The S.C of this approach will be -> O(n) + O(k) = O(n) we are using extra space here.