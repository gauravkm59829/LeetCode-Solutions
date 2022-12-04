class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long rightSum = 0;
        long long leftSum = 0;
        int n = nums.size(), cnt = 0;
        for(int i = 0; i < n; i++)
            rightSum += (nums[i] * 1LL);
        
        for(int i = 0; i < n - 1; i++){
            rightSum -= nums[i];
            leftSum += nums[i];
            if(leftSum >= rightSum) cnt++;
        }
        return cnt;
    }
};