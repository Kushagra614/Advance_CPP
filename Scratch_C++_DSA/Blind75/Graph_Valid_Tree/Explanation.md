## Graph Valid Tree

**Ques**
Given n nodes labeled 0 to n-1 and a list of undirected edges, return true if these edges make up a valid tree.

**Approach**

OPT:
A valid tree has exactly two properties — it has n-1 edges and it has no cycle (i.e. all nodes are connected with no extra edges). So first I check if edges.size() != n-1 and immediately return false if so. Then I use Union-Find with path compression and union by rank. For each edge I try to union the two nodes — if they already share the same parent it means adding this edge would create a cycle, so return false. If all edges are processed without a cycle, the graph is a valid tree. TC - O(n * alpha(n)) ≈ O(n) SC - O(n)
