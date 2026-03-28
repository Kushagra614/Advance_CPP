## Ques
Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.
Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.

## APPROACH
### OPT
First, I sort the intervals based on their starting time so that any overlapping intervals come next to each other. I keep track of one interval as my current (ans) and createcount to  count removals. Then I iterate through the intervals and check if the current interval overlaps with ans. If there is no overlap, I update ans to the current interval. If there is an overlap, I inc the count because one interval has to be removed. To make the optimal choice for future comparisons, I keep the interval with the smaller end time as ans, since a smaller end leaves more room for upcoming intervals and reduces future overlaps. I continue this process for all intervals, and by the end, the count gives the minimum number of intervals to remove.

T.C will be -> O(nlogn) + O(n) => O(nlogn)
S.C will be -> O(k) -> jst one vector