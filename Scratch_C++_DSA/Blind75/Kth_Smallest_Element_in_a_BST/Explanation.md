## Kth Smallest Element in a BST

**Ques**
Given the root of a BST and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

**Approach**

OPT:
Inorder traversal of a BST gives nodes in sorted (ascending) order. So I do an inorder traversal and maintain a counter. Every time I visit a node I increment the counter — when the counter hits k, that's my answer. I store it in a result var and return early to avoid unnecessary traversal. TC - O(n) SC - O(1) -> recursion stack not counted
