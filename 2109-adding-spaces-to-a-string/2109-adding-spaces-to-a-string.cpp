class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int n = s.length(), k = 0;
        for(int i = 0; i < n; i++){
            if(k < spaces.size() && i == spaces[k]){
                ans += ' ';
                k++;
            } 
            ans += s[i];
        }
        
        return ans;
    }
};