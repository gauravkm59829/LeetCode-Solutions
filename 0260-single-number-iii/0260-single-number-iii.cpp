class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long n = nums.size(),x = 0, y = 0,xo = nums[0];
        vector<int> ans;
        for(int i = 1; i < n; i++){
            xo ^= nums[i];
        }
        
        long long lsb = xo & (xo - 1) ^ xo;
        for(int i = 0; i < n; i++){
            if(nums[i] & lsb)
                x ^= nums[i];
        }
        y = x ^ xo;
        
        ans.push_back(x);
        ans.push_back(y);
        return ans;
        
    }
};