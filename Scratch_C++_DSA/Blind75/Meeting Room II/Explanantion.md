## QUES:
Given an array of meeting time interval objects consisting of start and end times [[start_1,end_1],[start_2,end_2],...] (start_i < end_i), find the minimum number of rooms required to schedule all meetings without any conflicts.

## APPROCHES:
### OPT:
I start by sorting the intervals by their start time. I need to have a data str that is able to store the meetings in with shortest endtime. I create a min heap(pq) for it. I start by pushing the 1st meetign;s endtime into the pq. Then while iterating the trhu the intervals, I check that if the meeting is overlapping then I push that into into the pq ( as the size denotes the no. of rooms). as we need one more room now. If the end is smaller or equal to the next meeting start, then pop the stop from the pq as we will resume the same room and uch the next meeting end.
we WIll keep on doing this thorughout the entire iteration. and at the end the size of the pq will be the ans

TC - O(nlogn) + O(logn) + O(n) = O(nlogn)
SC - O(k) = size of the rooms