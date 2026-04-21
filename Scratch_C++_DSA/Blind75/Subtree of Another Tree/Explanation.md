## Ques
Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

## Approach
### OPT:
So the idea is pretty straightforward, I will traverse the main tree and at every node I will check if the value matches the subRoot's value. If it does, I will use a dfs function to check if the entire structure below that node is identical to the subRoot tree.
I will run a DFS on both trees, checking if values match at every node and recursively verifying the left and right children. 
For traversal I will use preorder — check current node first, if match found run the helper, if not keep searching left and right subtrees.

TC - O(m x n) -> O(m) — traversing the main tree; O(n) — running dfs on the subRoot tree at each node
SC - O(h) - height of the tree(worst case)