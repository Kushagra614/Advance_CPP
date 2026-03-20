## Ques
Given a sorted array which has been rotated. Find the min element in that array.

## Approaches
### BF:
To find the min element i would iterate through the araay, i will check each element with the min val found so far. When the iterations ends, then we would have the min value of the array.

T.C for this -> O(n)
S.C for this -> O(1)

### OPT:
Now in order to solve the is question is O(logn) complexity. I would apply binary search as the array is roated yet sorted. Now after getting the mid val we will check that if that mid val is greater than the 1st low ele. If its greater then it means, that the min ele of one part of the array would be low. Now to check further we will move towrds the other part wiich is left.
Similarly, if the mid val is less than low , this means that the pivot point for roatating is on the low side and the min val will be foudn there, SO we will move towrds the left part. By doing this at the end we will find the min val

T.C for this -> O(logn) = binary search
S.C for this -> O(1)