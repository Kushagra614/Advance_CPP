## Ques:
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

## Approach
### OPT
We have been given two tree of two trees and we have to check if those two trees are same or not. Now I will perform DFS on both the trees and check each and every node thourghut the traversal. If the nodes are same, the dfs will continue, but if not it will retun false.

TC - O(n)
SC - O(h) -> height of the tree