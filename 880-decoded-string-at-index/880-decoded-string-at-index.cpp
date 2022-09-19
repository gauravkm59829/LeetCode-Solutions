class Solution {
public:
    string decodeAtIndex(string s, int k) {
        
        int n = s.length();
        long long ln = 0;
        int i = 0;
        while(ln < k){
            if(s[i] >= '2' && s[i] <= '9'){
                ln *= (int)(s[i] - '0');
            } else ln++;
            i++;
        }
        
         while(i--){
            if(isdigit(s[i])){
                ln /= (int)(s[i] - '0');
                k %= ln;
            } else if(k % ln == 0)
                return string(1,s[i]);
             else
               ln--;
        }
        
        return "";
    }
};