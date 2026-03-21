## Ques:
Return true if there is a cycle in the linked list. Otherwise, return false.

## Approach
### OPT:
To check whether the LL has a cycle or not. I will use 2 pointers. Both will have with diff speeds. the slow onw will move 1 node at a time and the fast one will move 2 nodes at a time. This will go on while fast is not equal to null or fast->next is not equal to null. If at any point the pointers, slew and fast meet, it means that the cycle exists.

T.C => O(n)
S.C => O(1)