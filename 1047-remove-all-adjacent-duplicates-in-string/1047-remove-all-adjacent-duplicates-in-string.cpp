class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.length();
        string ans = "";
        for(int i = 0; i < n; i++){
            if(!st.empty() && s[i] == st.top()){
                st.pop();
            } else
                st.push(s[i]);
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};