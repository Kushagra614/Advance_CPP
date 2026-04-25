## Construct Binary Tree from Preorder and Inorder Traversal

**Ques**
Given two integer arrays preorder and inorder where preorder is the preorder traversal and inorder is the inorder traversal of the same tree, construct and return the binary tree.

**Approach**

OPT:
In preorder the first element is always the root. Once I know the root, I find its position in the inorder array — everything to its left is the left subtree and everything to its right is the right subtree. I use a hashmap to find the root's index in inorder in O(1). I recursively do this for both halves, incrementing a preorder index as I consume each root. TC - O(n) SC - O(n) -> hashmap storage
