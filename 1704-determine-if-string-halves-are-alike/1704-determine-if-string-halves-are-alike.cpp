class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int i = 0,j = n-1,c1 = 0, c2 = 0;
        while(i<j){
            char ch1 = tolower(s[i]);
            char ch2 = tolower(s[j]);
        if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
            c1++;
         if(ch2=='a' || ch2=='e' || ch2=='i' || ch2=='o' || ch2=='u')
            c2++;
            
          i++;
          j--; 
        }
        if(c1==c2)
            return true;
        return false; 
        
    }
};