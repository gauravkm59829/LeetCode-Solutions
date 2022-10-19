class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        vector<string> ans;
        vector<pair<string,int>> vp;
        unordered_map<string,int> mp;
        for(int i = 0; i < n; i++)
            mp[words[i]]++;
        
        for(auto it : mp){
            vp.push_back({it.first,it.second});
        }
        
        sort(vp.begin(),vp.end(),[&](const pair<string,int>& s1, pair<string,int>& s2){
             if(s1.second == s2.second)
                 return s1.first <= s2.first;
            return s1.second > s2.second;
        });
        
        for(auto it: vp){
            if(k > 0)
            ans.push_back(it.first);
            k--;
        }
        
        return ans;
    }
};