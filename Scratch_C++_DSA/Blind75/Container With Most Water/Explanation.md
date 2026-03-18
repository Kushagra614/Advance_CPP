## Ques:

Given an array height, find two lines such that they form a container that can store the maximum water.

## Aproaches
### OPT:

So here in the input given we have heights of vertical lines. We will start by placing two pointers, one at the beginning and one at the end of the array. Then at each step we will calculate the area formed by these two lines by taking the minimum of the two heights and multiplying it with the distance between them.
After calculating the area, we will compare it with our current maximum and update it if needed. Now to try and get a better answer, we will move the pointer which is pointing to the smaller height, because the smaller height is the limiting factor for the area. Moving the larger height will not help in increasing the area.
We will keep doing this until both the pointers meet. If after the whole iteration we have found the maximum possible area, we will return it.

The T.C of this approach will be -> O(n)
The S.C of this approach will be -> O(1)