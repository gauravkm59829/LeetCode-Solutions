class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;
        vector<int> dp(n,0);
        int cnt = 0;
        
        for(int i = 2; i < n; i++){
            if(nums[i - 1] - nums[i - 2] == nums[i] - nums[i - 1]){
                dp[i] = 1 + dp[i - 1];
                cnt += dp[i];
            }
        }
        
        return cnt;
    }
};