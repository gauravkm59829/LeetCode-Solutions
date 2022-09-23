class Solution {
public:
    int minimumCardPickup(vector<int>& v) {
        unordered_map<int,int> mp;
        int n = v.size();
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            if(mp[v[i]] == 0){
               mp[v[i]] = i + 1;
            } else {
                mn = min(mn,(i + 1) - mp[v[i]] + 1);
                mp[v[i]] = i + 1;
            }
        }
        
        return (mn == INT_MAX)?-1 : mn;
    }
};