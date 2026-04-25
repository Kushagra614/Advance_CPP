## Course Schedule

**Ques**
There are numCourses courses labeled 0 to n-1. Given prerequisites pairs [a, b] meaning you must take b before a, return true if you can finish all courses.

**Approach**

OPT:
This is basically a cycle detection problem on a directed graph. I build an adjacency list from the prerequisites. Then I do a DFS and track the state of each node — 0 means unvisited, 1 means currently in the DFS stack (being processed), 2 means fully processed. If during DFS I hit a node with state 1 it means there's a cycle so I return false. If I finish processing a node I mark it 2. If no cycle is found for any node, return true. TC - O(V+E) SC - O(V+E)
