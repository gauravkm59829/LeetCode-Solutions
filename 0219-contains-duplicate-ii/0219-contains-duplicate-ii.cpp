class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        unordered_map<int,pair<int,int>> mp;
        int n = v.size();
        for(int i = 0; i < n; i++){
            mp[v[i]].first++;
            if(mp[v[i]].first > 1){
                if(i - mp[v[i]].second <= k) return true;
                mp[v[i]].first = 1;
            }
            mp[v[i]].second = i;
        }
        return false;
    }
};