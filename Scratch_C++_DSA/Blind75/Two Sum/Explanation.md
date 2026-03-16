## Ques
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

## Approachs
### BF:
So I will check every possible combination of the elements in the array and check whether they sum up to the target. If I get the sum, then I will store and and return the indices of the two nums. For this I loop the array twice with 2 pointers for making every num combination possible.

The T.C will be -> O(n^2)
The S.C will be -> O(1)

### OPT:
As we are iterating the whole array for each and every num, to avoid this we will store the num and its index in a map. Then as target is already given to us, we will find the num which helps us make that target sum possible by subtracting the curr ele from the target. Then we will check if that num exists in the map, then it means that sum is possible. We will find that num in the map and return its index and the index of the num we were currently on.

The T.C will be -> O(n) + O(n) = O(n)
The S.C will be -> O(n) for hash map
