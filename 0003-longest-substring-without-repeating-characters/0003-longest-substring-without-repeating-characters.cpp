class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int pre = -1, mx = INT_MIN;
        int n = s.length();
        vector<int> v(127,-1);
        if(n == 0)
        {
            return 0;
        }        
        for(int i = 0;i<n;i++){
            if(v[s[i]] > pre)
                pre = v[s[i]];
            v[s[i]] = i;
            mx = max(mx, i - pre);
            
        }
        return mx;
    }
};