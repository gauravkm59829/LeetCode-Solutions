class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n = operations.size();
        unordered_map<int,int> mp,vis,m;
        
        for(int i = 0; i < nums.size();i++)
          mp[nums[i]] = 0;
        for(int i = 0; i < n; i++){
            
            if(vis[operations[i][0]] == 1){
                mp[m[operations[i][0]]] = operations[i][1];
                m[operations[i][1]] = m[operations[i][0]];
            } else {
                mp[operations[i][0]] = operations[i][1];
                m[operations[i][1]] = operations[i][0];
            }
           vis[operations[i][1]] = 1;
          
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] != 0)
                nums[i] = mp[nums[i]];
        }
        return nums;
    }
};