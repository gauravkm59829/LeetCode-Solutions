class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int ans = 0;
        int prev = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            string st = bank[i];
            for(int j = 0 ; j < st.length(); j++){
                if(st[j] == '1')
                    cnt++;
            }
            if(cnt > 0){
                if(prev != 0)
                    ans += cnt * prev;
                prev = cnt;
                cnt = 0;
            }
        }
        return ans;
    }
};