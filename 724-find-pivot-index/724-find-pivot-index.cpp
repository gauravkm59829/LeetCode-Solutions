class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pref = 0,suf = 0;
        int n = nums.size();
        for(int i = n - 1; i >= 1; i--){
            suf += nums[i];
        }
        
        if(pref == suf) return 0;
        for(int i = 1; i < n; i++){
            pref += nums[i - 1];
            suf -= nums[i];
            if(suf == pref) return i;
        }
        
        return -1;
    }
};