class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int mn = nums[0];
        int pos = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] <= mn && nums[i - 1] != nums[i]){
                mn = nums[i];
                pos = i;
            }
        }
        
        for(int i = 0; i < n - 1; i++){
            if(nums[(pos + i) % nums.size()] > nums[(pos + i + 1) % nums.size()]) return false;
        }
               
               return true;
    }
};