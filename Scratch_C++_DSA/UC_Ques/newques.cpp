#include<iostream>
using namespace std;

/*
array of int and have form p pairs -> each pair will have the diff bwteen of nums ( abs), amaong them pair with largest diff -> reduce that largest diff
trying to min the max diff among all the p pairs 

                0 1 2 3 4 5
Input: nums = [10,1,2,7,1,3], p = 2
Output: 1
Explanation: The first pair is formed from the indices 1 and 4, and the second pair is formed from the indices 2 and 5. 
The maximum difference is max(|nums[1] - nums[4]|, |nums[2] - nums[5]|) = max(0, 1) = 1. Therefore, we return 1.

-> (1,1), (2,3)
-> max(0, 1) = 1;



brute
sort = [1,1,2,3,7,10]
            i j

d1 = 0
d2 = 1

vector = 0, 1
ans = 1;


dry run 
[1,1,2,3,7,10]

for ( z -> p)
for(i -> n-1)
for (j -> n)
i = 1, j = 1 ,d = 0 ,minD = 0,

i = 1, j = 2, d = 1, minD = 0,

i = 2, j = 3, d = 1, minD = 0,

i = 3, j = 7, d = 4 minD = 0,

i = 7 , j = 10, d = 3, minD = 0,


minD = 0 (store it)













*/



int main(){

   return 0;
}