## Ques
Given the root of a binary tree, invert the tree, and return its root.

## Approach
### OPT:
Acc to the question the inversion here means that the left node will be swapped with the right node. In order to do this, I will recursily swap the left and right nodes of the bst. For swapping I will use a temp var and use the genral swapping method. I will do these swaps recuresivly for the left of the root and the right of the root. After the whole process is complete I will return the root.

TC - O(n)
SC - O(1) -> recursion stack space is not counted