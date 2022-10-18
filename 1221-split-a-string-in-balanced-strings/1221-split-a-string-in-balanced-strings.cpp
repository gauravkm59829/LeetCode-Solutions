class Solution {
public:
    int balancedStringSplit(string s) {
        int hs[2] = {0};
        int n = s.length(),cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
               hs[0]++;
            } else {
               hs[1]++;
            }
            if(hs[0] == hs[1]){
                cnt++;
                hs[0] = hs[1] = 0;
             }
        }
        
    
        return cnt;
    }
};