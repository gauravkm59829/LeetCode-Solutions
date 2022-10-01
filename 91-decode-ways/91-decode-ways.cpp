class Solution {
public:
    
    int DP(int ind, int n, vector<int> &dp, string &s){
        if(ind < n && s[ind] == '0') return 0;
        
        if(ind >= n) return 1;
        
        if(dp[ind] != -1) return dp[ind];
        
        int w = 0;
        if(s[ind] != '0') w += DP(ind + 1, n, dp, s);
        
        if(ind + 1 < n && (s[ind] == '1' && s[ind + 1] <= '9' || s[ind] == '2' && s[ind + 1] <= '6'))
            w += DP(ind + 2, n, dp,s);
        
        return dp[ind] = w;
    }
    int numDecodings(string s) {
        int n = s.size();
        int ind = 0;
        
        vector<int> dp(n+1,-1);
        
        return DP(ind,n,dp,s);
        
    }
};