## Ques
Given an m x n matrix, return all elements of the matrix in spiral order.

## Approach:
### OPT:
First, I take four pointers to represent the current boundaries of the matrix: top (t), bottom (b), left (l), and right (r). Initially, they cover the entire matrix. Then I iterate while these boundaries are valid. In each iteration, I traverse the matrix in four directions: first I print the top row from left to right and move the top boundary down. Then I print the rightmost column from top to bottom and move the right boundary left. After that, if rows are still valid, I print the bottom row from right to left and move the bottom boundary up. Similarly, if columns are still valid, I print the leftmost column from bottom to top and move the left boundary right. I keep shrinking these boundaries after each traversal so that I don’t duplicate elements. This process continues until all elements are covered, and the ans is stored in the answer array.

TC for this -> O(mxn)
SC will be O(1)