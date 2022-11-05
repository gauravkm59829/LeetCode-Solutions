class Solution {
public:
    int minPS(vector<vector<int>>& grid, vector<vector<int>>& dp, int row,int col){
        if(row == 0 && col == 0){
            return grid[row][col];
        }
        if(row < 0 || col < 0) return INT_MAX;
        if(dp[row][col] != -1) return dp[row][col];
        int left = minPS(grid, dp, row, col - 1);
        int up = minPS(grid, dp, row - 1, col);
        return dp[row][col] = grid[row][col] + min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m, -1));
        return minPS(grid, dp, n - 1, m - 1);
    }
};