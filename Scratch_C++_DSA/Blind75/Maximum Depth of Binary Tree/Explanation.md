## Ques
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Approach
### OPT:
SO we have to find the max depth of the Bt here. Now the initial thought tat comes to mind for finding the depth is counting the levels fo the Bt. To cont the levels we will use the Level order traversal (BFS). I will take a queue and push the node into it. Then I will cal the size of the queue which will tell me how mamy ele are there in order the process them. i will pop the front of the queue nd check if its left or right children exists, if yes  I will push them into the queue as well. After the popping the queue and pushing the children I will inc the depth counter. Thsi prcoess will go on untill the  q is not empty.
At the end we will retunn the depth.

TC - O(n)
SC - O(n) - size of q(worst case)