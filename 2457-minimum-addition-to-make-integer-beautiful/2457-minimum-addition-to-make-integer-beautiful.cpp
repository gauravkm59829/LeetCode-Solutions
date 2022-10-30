class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long num = n,sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        
        if(sum <= target) return 0;
        
        num = n;
        string s = to_string(num);
        int ln = s.length();
        
        for(int i = ln - 1; i > 0; i--){
            sum -= (s[i] - '0');
            s[i] = '0';
            s[i - 1] = s[i - 1] + 1;
            long long ne = 0;
            for(int j = 0; j < ln; j++){
                ne = ne * 10 + (s[j] - 48);
            }
            sum++;
            if(sum <= target) return ne - n;
        }
            
            
            
        long long dg = (s[0] - '0') + 1;   
        long long udg = dg;
        int len = ln - 1;
         while(len--){
            dg = dg * 10;
        }
       
        
        if(udg <= target) return dg - n;
        
        long long nm = 1;
        while(ln--){
            nm *= 10;
        }
        
        return nm - n;
    }
};