class Solution {
public:
    bool winnerOfGame(string v) {
        int n = v.size();
        int al = -1, b = -1, totAl = 0, totB = 0;
        for(int i = 0; i < n; i++){
            if(i < n - 1 && v[i] == v[i + 1]){
                if(v[i] == 'A')
                    al++;
                else
                    b++;
            } else {
                totAl += max(0 , al);
                totB += max(0, b);
                al = -1;
                b  = -1;
            }
        }
        
        if(totAl > totB) return true;
        return false;
    }
};