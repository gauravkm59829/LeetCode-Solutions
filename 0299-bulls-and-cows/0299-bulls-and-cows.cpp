class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> mp;
        bool vis[1001] = {0};
        int b = 0, c = 0;
        int n = secret.length();
        for(int i = 0; i < n; i++){
            if(secret[i] == guess[i]){
                b++;
                vis[i] = 1;
            }
            else
                mp[secret[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(vis[i] == 0 && mp[guess[i]] > 0){
                c++;
                mp[guess[i]]--;
            }
        }
        
        string ans = "";
        string s1 = to_string(b);
        ans += s1;
        ans += 'A';
        string s2 = to_string(c);
        ans += s2;
        ans += 'B';
        
        return ans;
    }
};