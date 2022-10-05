class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0,n = nums.size();
        int mx = 0;
        int l = 0,r = 0;
        while(r < n){
            if(nums[r] == 0)
                cnt++;
            while(cnt > k && l < r){
                if(nums[l] == 0)
                    cnt--;
                    l++;
            }
            
            if(cnt <= k){
                mx = max(mx,r - l + 1);
            }
            r++;
        }
        
        return mx;
    }
};