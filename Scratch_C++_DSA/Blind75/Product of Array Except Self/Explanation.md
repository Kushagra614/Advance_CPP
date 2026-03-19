## Ques

Given an array, return a new array where each element is equal to the product of all the other elements except itself.

## Approach
### OPT
So the idea here is to avoid recalculating the product for every element again and again, because that would be too slow. Instead, I go through the array in two passes. In the first pass, I move from left to right and keep a running product of all the elements before the current position, and store it. This means at each index I already have the product of everything on the left side. Then in the second pass, I move from right to left and keep a running product of elements on the right side, and multiply it with the value I already stored. By doing this, each position ends up having the product of all elements except itself. 

The T.C will be -> O(n)
The S.C will be -> O(n) 