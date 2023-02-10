//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        vector<int> hs(26,0);
        for(auto it : s)
          hs[it - 'a']++;
        int ans = INT_MAX;
        for(int i = 0; i < 26; i++){
            if((i == ('o' - 97)) || (i == ('l' - 97))) ans = min(ans,hs[i] / 2);
            else if((i == ('a' - 97)) || (i == ('b' - 97)) || (i == ('n' - 97))) ans = min(ans,hs[i]);
        }  
        if(ans == INT_MAX) return 0;
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends