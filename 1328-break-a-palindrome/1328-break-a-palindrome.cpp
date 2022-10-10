class Solution {
public:
    string breakPalindrome(string palin) {
        int n = palin.length(),fg = 0;
        if(n == 1) return "";
        for(int i = 0; i < n / 2; i++){
            if(palin[i] != 'a'){
                fg = 1;
                palin[i] = 'a';
                break;
            }
        }
        
        if(!fg)
            palin[n - 1] = 'b';
        
        return palin;
    }
};