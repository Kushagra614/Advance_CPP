## Ques:
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

## Approach:
### OPT:
First, I sort the intervals based on their starting time so that overlapping intervals come next to each other. Then I keep one interval as my current interval (ans) and start comparing it with the next intervals one by one. For each interval, I check whether it overlaps with the current interval. If they overlap, I merge them by updating the start and end of the current interval. If they do not overlap, I store the current interval in the result and move on by setting the current interval to the new one.
After finishing the loop, I still have one interval left in hand, so I push that into the result as well.

T.C => (nlogn) + O(n) = O(nlogn)
S.C => O(n)