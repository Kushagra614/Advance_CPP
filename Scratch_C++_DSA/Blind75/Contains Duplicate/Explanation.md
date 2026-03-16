## Ques:
Return true if duplicates found in a array, else false

## Aproaches
### BF:
Now in order to check whether the an element is being repeated in the array or not, I will sort the array. This will brign all the respective deuplicates together. Now I will move through the array and check that whether the curr element is equal to the element prev to it or not. By doing this I will get to know that if the array contains duplicates or not.
NOTE: I started my iteration from the 2nd element in the array to avoid the iteration overflow (going out of the array).

The T.C of this approach will be -> O(nlogn) => O(n) for the iteration of the array and O(logn) for sorting.
The S.C of this approach will be -> O(1) => As we not using any extra space here.

### OPT:
In order to reduce the T.C, I will have to avoid sorting the array.
So to check whether an element is being repeated or not, I will have to store that element.
I will use a data structure ( set ), that does not allow any duplicated elements in it. I will put all the elements of the array in the set and then I will compare the sizes of both the set and the org array. If there is a diff in sizes, that means there must have been some duplicate element in the org array that is now removed by the set. And if the size remains the same, this means to duplicates are present.

The T.C of this approach will be -> O(n) => O(n) for the iteration of the array. 
The S.C of this approach will be -> O(k) => (k) we are using extra space here (k being the size of the set).

