//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> v)
  {
      // code here
      int ans = 0;
      unordered_map<int,int> mp;
      int fg = 0;
      for(int i = 0; i < N; i++){
          if(v[i] >= 0){
              fg = 1;
              mp[v[i]] += i;
          }
      }
      if(fg == 0) return 0;
      
      for(int i = 0; i < N; i++)
         ans = max(ans,mp[i]);
      for(int i = N - 1; i >= 0; i--)
          if(ans == mp[i]) return i;
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends