#include<iostream>
using namespace std;
/*
arra of int, find out the no. of subarray that have a cost <= k ( input)
cost = (max-min)* len of subarray ( var len )
len of arra = 10^5
k = 10^15
ele of array = 10^9
cost = 10^15

brute app
find subarray
cal the cost -> subarray
maintain max & min of the subarray 
check if cond is sufficicg then we will store that into our result 




array = [1,3,5,8], k = 5, n = 4
1) cost of every indiviual subarray would be 0 = 
2) count = 4+1+1 = 6
3) (1,3), (3,5)


brute force 
i and j 
count = 1
compare i and j -> min(nums[i],nums[j]) && same way max  = max - min *( j -i;) => cost 



opt 
array = [1,8,5,2], k = 6
ans = 4 + 1 + 1 = 6











*/
int main(){

   return 0;
}