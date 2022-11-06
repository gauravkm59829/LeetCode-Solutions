class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        long long ans = 0,sum = 0;
        int l = 0,r = 0;
        while(r < n && l < n){
            if(mp[nums[r]] == 1){
                mp[nums[l]]--;
                sum -= nums[l];
                l++;
            } else {
                 mp[nums[r]]++;
                 sum += nums[r];
                 if(r - l + 1 == k){
                    ans = max(ans,sum);
                    sum -= nums[l];
                    mp[nums[l]]--;
                    l++;
                } 
                r++;
            }
           
        }
        return ans;
        
    }
};