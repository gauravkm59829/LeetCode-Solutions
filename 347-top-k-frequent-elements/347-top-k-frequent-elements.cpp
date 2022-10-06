class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(auto it : nums){
            mp[it]++;
        }
        
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        
      while(k--){
          auto ans = pq.top();
          res.push_back(ans.second);
          pq.pop();
      }
        
        return res;
    }
};