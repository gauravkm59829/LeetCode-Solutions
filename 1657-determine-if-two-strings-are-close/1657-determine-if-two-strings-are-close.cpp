class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int ln1 = word1.length();
        int ln2 = word2.length();
        multiset<int> st1,st2;
        unordered_map<char,int> mp1,mp2;
        
        if(ln1 != ln2) return false;
        for(int i = 0; i < ln1; i++){
            mp1[word1[i]]++;
        }
        
        for(auto it : word2){
            if(mp1[it] == 0) return false;
            mp2[it]++;
        }
        
        for(auto it : mp1){
            st1.insert(it.second);
        }
        
        for(auto it : mp2){
            st2.insert(it.second);
        }
        if(st1 != st2) return false;
        return true;
    }
};