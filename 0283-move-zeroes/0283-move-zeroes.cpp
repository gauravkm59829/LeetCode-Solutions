class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        
        while(i < n){
            if(nums[i]!=0){
               nums[j++]=nums[i];
                 }
              i++;
             }
        
        for(int i = j; i < n; i++){
            nums[i] = 0;
        }
    }
};