## Ques:
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

## Approaches:
### OPT:
so now, I will push all the intervals that have the starting less than the new interval, then after that I will compareteh new interval with intervals and whwen they overlap, I will update the newInterval acc to min and max of the overlapping window. After this I will push all the intrvals that are left into the ans vector.

The T.C will be => O(n)
the S.C will be => O(1) exclude the ans arr