class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        unordered_set<int> st;
        int n = rolls.size(),ans = 1;
        for(int i = 0; i < n; i++){
            st.insert(rolls[i]);
            if(st.size() == k){
                ans++;
                st.clear();
            }
                
        }
        return ans;
    }
};