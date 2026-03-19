## Ques
Given an array where each value represents the price of a stock on that day, find the maximum profit you can make by buying on one day and selling on a later day.

## Approachs
### BF:
So I will try every possible pair of days. For each day, I will assume I buy on that day and then check all the days after it to see where I can sell.For every such pair, I will calculate the profit and keep track of the maximum profit I can get.
Since I am checking all possible combinations of buy and sell days, I will be using two loops.

The T.C will be -> O(n²)
The S.C will be -> O(1)

### OPT:
Instead of checking every pair, I will keep track of the lowest price I have seen so far while going through the array. Then for each day, I will check how much profit I can make if I sell on that day using the lowest price seen before. If I find a better profit, I update it. If I find a lower price, I update my buying price. This way, I only go through the array once.

The T.C will be -> O(n)
The S.C will be -> O(1)