class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size(),cnt = 0,ans = 0,fg = 0;
        unordered_map<string,int> mp1,mp2;
        for(int i = 0; i < n; i++){
            mp1[words[i]]++;
            if(words[i][0] == words[i][1]){
                mp2[words[i]]++;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(words[i][0] == words[i][1]){
                if(mp2[words[i]] % 2){
                    ans += 2 * (mp2[words[i]] - 1);
                    mp2[words[i]] = 0;
                    fg = 1;
                } else {
                    ans += 2 * mp2[words[i]];
                    mp2[words[i]] = 0;
                }
            } else {
             string rev = "";
             rev += words[i][1];
             rev += words[i][0];
            if(mp1[rev] > 0){
                ans += min(4 * mp1[words[i]],4 * mp1[rev]);
                mp1[rev] = 0;
                mp1[words[i]] = 0;
                }
            }
        }
            if(fg) ans += 2;
            return ans;
    }
};