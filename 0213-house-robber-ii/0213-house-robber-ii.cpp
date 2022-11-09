class Solution {
public:
    
    int maxAm(vector<int>& nums,vector<vector<int>>& dp, int ind, int prev, int fg){
        if(ind == 0){
            if(prev == 0 && fg == 0){
             return nums[ind];
            } else return 0;
        }
        if(dp[ind][prev] != -1 && prev == 0){
          return dp[ind][prev];
    }
        int pick = 0;
        if(prev == 0)
          pick = nums[ind] + maxAm(nums, dp, ind - 1, 1, fg);
        int notPick = maxAm(nums, dp, ind - 1, 0, fg);
        
        return dp[ind][prev] = max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<vector<int>> dp1(n, vector<int>(n + 1, -1));
        int f1 = nums[n - 1] + maxAm(nums, dp1, n - 2, 1, 1);
        vector<vector<int>> dp2(n, vector<int>(n + 1, -1));
        int f2 = maxAm(nums, dp2, n - 2, 0, 0);
        
        //cout << f1 << " " << f2 << "\n";
        return max(f1,f2);
    }
};