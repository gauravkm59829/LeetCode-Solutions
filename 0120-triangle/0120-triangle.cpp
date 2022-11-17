class Solution {
public:
    
    int ms(int i,int j,vector<vector<int>>& tri,vector<vector<int>> &dp){
        if(i == tri.size())
            return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int l = tri[i][j] + ms(i + 1, j, tri, dp);
        int r = tri[i][j] + ms(i + 1, j + 1, tri, dp);
        return dp[i][j] = min(l,r);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        return ms(0,0,triangle,dp);

    }
};