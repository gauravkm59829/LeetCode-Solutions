class Solution {
public:
    
    int LIS(vector<int>& nums,vector<vector<int>>& dp, int ind,int n, int prev){
       if(ind == n) return 0;
        
       if(dp[ind][prev + 1] != -1) return dp[ind][prev + 1];
        int notPick = LIS(nums,dp, ind + 1, n, prev);
        int pick = 0;
         if(prev == -1 || nums[ind] > nums[prev]){
              pick = 1 + LIS(nums,dp,ind + 1, n, ind);
         } 
        return dp[ind][prev + 1] = max(pick,notPick);
        
    }
  
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return LIS(nums,dp,0,n,-1);
       // return dp[n - 1];
    }
};