class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, mx = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum = max(sum+nums[i], nums[i]);
            mx = max(mx,sum);
        }
        return mx;
    }
};