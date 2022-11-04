class Solution {
public:
    
    int minJmp(int ind,int n,vector<int>& nums,vector<int>& dp){
        if(ind >= n - 1){
            return 0;
        }
        
        if(dp[ind] != 10005) return dp[ind];
        for(int i = 1; i <= nums[ind]; i++){
            dp[ind] = min(dp[ind],1 + minJmp(ind + i,n,nums,dp));
        }
        return dp[ind];
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,10005);
        return minJmp(0, n, nums, dp);
    }
};