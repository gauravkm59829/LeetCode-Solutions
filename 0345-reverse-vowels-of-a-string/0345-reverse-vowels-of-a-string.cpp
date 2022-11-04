class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length();
        int l = 0;
        int r = n - 1;
        while(l <= r){
            char ch = tolower(s[l]);
            if(isVowel(ch)){
                char ch2 = tolower(s[r]);
                while(r > l && !isVowel(ch2)){
                    ch2 = tolower(s[r - 1]);
                    r--;
                }
              
                swap(s[l],s[r]);
                r--;
            }
            l++;
        }
        return s;
    }
};