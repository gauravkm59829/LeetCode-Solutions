class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int m1 = INT_MAX,m2 = INT_MAX;
        for(int i = 0; i < n; i++){
            if(nums[i] > m2) return true;
            if(nums[i] > m1) m2 = min(m2,nums[i]);
            m1 = min(m1,nums[i]);
         }
        return false;
    }
};