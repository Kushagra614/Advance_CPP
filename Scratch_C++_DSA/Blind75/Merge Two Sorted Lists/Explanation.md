## Ques
Given two sorted linked lists, merge them into one sorted linked list and return its head.

## Approach
### OPT:

Since both linked lists are already sorted, I can directly merge them without using extra space.
I create a dummy node to make it easier to build the new list. Then I go through both lists at the same time and compare their current values. Whichever value is smaller, I attach that node to my new list and move that list forward
I keep doing this until one of the lists becomes empty. After that, I simply attach whatever is left from the other list to the end.

The T.C for this -> O(n + m)
The S.C for this -> O(1)