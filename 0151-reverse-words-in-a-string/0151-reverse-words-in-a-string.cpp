class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(),s.end());
        int l = 0,r = 0,cnt = 0;
        string ans = "";

        while(l < n && r < n){
            if(s[l] == ' ')
                l++;
            else { 
                r = l + 1;
                string st = "";
                st += s[l];
                while(r < n && s[r] != ' '){
                    st += s[r];
                    r++;
                }
                cnt++;
                reverse(st.begin(),st.end());
                if(cnt != 1)
                 ans += ' ';
                ans += st;
                l = r + 1;
            } 
          }
        
        return ans;
    }
};