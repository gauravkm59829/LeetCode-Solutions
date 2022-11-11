class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size(),op = 0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int num = nums[0];
        
        for(auto it : nums){
            mp[it]++;
        }
        for(int i = n - 1; i > 0; i--){
            if(nums[i] != nums[i - 1] && nums[i] != num){
                op += mp[nums[i]];
                mp[nums[i - 1]] += mp[nums[i]];
            }
        }
        
        return op;
    
    }
};