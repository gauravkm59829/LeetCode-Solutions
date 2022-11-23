class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int gcd = 0,ans = 0,cnt = 0;
        
        for(int i = 0; i < n; i++){
            gcd = nums[i];
             for(int j = i ; j < n; j++){
                 gcd = __gcd(gcd,nums[j]);
                 if(gcd == k) cnt++;
             }
        }
        return cnt;
    }
};