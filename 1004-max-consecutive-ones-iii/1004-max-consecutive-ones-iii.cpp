class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0,n = nums.size();
        int mx = 0;
        int l = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
                cnt++;
            while(cnt > k && l < i){
                if(nums[l] == 0)
                    cnt--;
                    l++;
            }
            
            if(cnt <= k){
                mx = max(mx,i - l + 1);
            }
        }
        
        return mx;
    }
};