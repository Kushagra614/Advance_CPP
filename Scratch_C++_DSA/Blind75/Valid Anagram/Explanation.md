## Ques:
Return true if both strs are anagrams, else false

## Aproaches
### BF:
Now in order to check that whether the 2 strs are anagrams or not. So I thought of sorting both the strs in alphabetical order. By doing this if the strs are anagrams , they would become identical, else not. So I sort the strs and then compare them, If they are the same, it means they are anagrams else not. 

The T.C of this approach will be -> O(nlogn) => O(n) for the iteration and O(nlogn) for sorting.
The S.C of this approach will be -> O(1) => As we not using any extra space here.

### BETTER:
In order to reduce the T.C, I will have to avoid sorting the strs.
So now I will store the char of the str with its freq. I will do this for the both the strs. Then I will check that if the stored vals with their freq are same for both the strs, then it means that they are anagrams, else not  

The T.C of this approach will be -> O(n+m) => O(n) for the iteration of the strs. 
The S.C of this approach will be -> O(n) + O(m) = O(n+m) => we are using extra space here for storing each char and its freq (map).

### OPT:
Our S.C can be optmized as its O(m+n). To reduce this we should only store any one the of the strs (its char and freq). Then we will iterate through the other str, and check for each char in the (map), if its present, then we will also recude the freq as if we have seen it once. If while checking the freq is 0, we will remove that char. Like this we will iterate the whole str, then after that, we will see that if the map is empty then it means that we have check all the char and all are same, hence they are anagrams, else not.

The T.C of this approach will be -> O(n+m) => O(n) for the iteration of the strs. 
The S.C of this approach will be -> O(n) = O(n) => we are using extra space for only one str here.

