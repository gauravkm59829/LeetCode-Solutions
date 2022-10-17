class Solution {
public:
    bool checkIfPangram(string sentence) {
       int hash[26]={0};
        int n=sentence.length();
        for(int i=0;i<n;i++){
          hash[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
           if(hash[i]<1)
               return false;
        }
        return true;
    }
};