class Solution {
public:
    int uniquePath(int row,int col, vector<vector<int>>& obsGd,vector<vector<int>>& dp){
        if(row == 0 && col == 0){
            if(obsGd[0][0] == 0) return 1;
            else return 0;
        }
        if(row < 0 || col < 0 || obsGd[row][col] == 1) return 0;
        if(dp[row][col] != -1) return dp[row][col];
        int left = uniquePath(row,col - 1,obsGd, dp);
        int up = uniquePath(row - 1,col,obsGd, dp);
        return dp[row][col] = left + up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m, -1));
        return uniquePath(n - 1, m - 1, obstacleGrid, dp);
    }
};