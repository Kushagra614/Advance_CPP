#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>>& grid, int i, int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0') return;

        grid[i][j] = '0';
        solve(grid, i +1, j);
        solve(grid, i -1, j);
        solve(grid, i , j+1);
        solve(grid, i , j-1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '1')
                {
                    solve(grid, i , j);
                        count++;
                }
            }
        }
        return count;

    }

int main() {
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    cout << numIslands(grid) << endl;

    return 0;
}