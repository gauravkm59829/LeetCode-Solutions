class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, mx = 0;
        int l = 0, r = 0;
        while(r < n){
            if(nums[r] == 0)
                cnt++;
            if(cnt > 1){
                while(cnt > 1 && l < r){
                    if(nums[l] == 0)
                        cnt--;
                    l++;
                }
            }
             if(cnt <= 1)
                    mx = max(mx,r - l);
             r++;
        }
        return mx;
    }
};