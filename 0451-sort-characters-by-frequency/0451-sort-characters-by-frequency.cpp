class Solution {
public:
    string frequencySort(string s) {
        
        priority_queue<pair<int,char>> pq;
        string ans = "";
        int n = s.length();
        unordered_map<char,int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        
       while(!pq.empty()){
           auto it = pq.top();
           ans += string(it.first,it.second);
           pq.pop();
       }
        return ans;
    }
};