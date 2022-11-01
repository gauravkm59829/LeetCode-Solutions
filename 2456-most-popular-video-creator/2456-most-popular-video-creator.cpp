class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& cr, vector<string>& ids, vector<int>& views) {
        map<string,int> mp;
        vector<vector<string>> ans;
       map<string,vector<pair<int,string>>> mp2;
        int mx = INT_MIN;
        for(int i = 0; i < cr.size(); i++){
            mp[cr[i]] += views[i];
            mp2[cr[i]].push_back({views[i],ids[i]});
            mx = max(mx, mp[cr[i]]);
        }
       
       for(auto &[it1,it2] : mp){
           if(it2 == mx){
           sort(mp2[it1].begin(),mp2[it1].end(),[&](const pair<int,string>& p1,const pair<int,string>& p2){
           if(p1.first == p2.first) return p1.second < p2.second;
           return p1.first > p2.first;
           });
           ans.push_back({it1,mp2[it1].front().second});
           }
       }
    
    return ans;
    }
};