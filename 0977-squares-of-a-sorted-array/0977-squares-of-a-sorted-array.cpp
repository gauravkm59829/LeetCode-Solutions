class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0, r = n - 1;
        for(int k = n - 1; k >= 0; k--){
            if(abs(nums[r]) > abs(nums[l])) ans[k] = nums[r] * nums[r--];
            else ans[k] = nums[l] * nums[l++];
        }
        
        return ans;
    }
};