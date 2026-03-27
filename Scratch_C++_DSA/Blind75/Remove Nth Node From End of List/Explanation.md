## Ques:

Given the head of a linked list, remove the nth node from the end of the list and return its head.

## Approach:
### OPT:

First, I traverse the linked list once to count the total number of nodes. This helps me convert the given position from the end into a position from the start using (nodes − n + 1). If this calculated position is 1, it means the head itself needs to be removed, so I simply return head->next. Otherwise, I traverse the list again and stop at the node just before the one I want to delete. From there, I remove the target node by connecting the current node directly to the next of the node to be deleted, effectively bypassing it. After the deletion, I return the updated head of the list.

T.C will be -> O(n) + O(n) = O(n)
S.C will be-> O(1)