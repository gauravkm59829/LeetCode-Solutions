class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0) sum += nums[i];
        }
        
        for(int i = 0; i < queries.size(); i++){
            if(nums[queries[i][1]] % 2 == 0){
                if((nums[queries[i][1]] + queries[i][0]) % 2 == 0)
                    sum += queries[i][0];
                else
                    sum -= nums[queries[i][1]];
            } else {
                if((nums[queries[i][1]] + queries[i][0]) % 2 == 0)
                    sum += nums[queries[i][1]] + queries[i][0];
            }
            ans.push_back(sum);
            nums[queries[i][1]] += queries[i][0];
        }
        
        return ans;
    }
};