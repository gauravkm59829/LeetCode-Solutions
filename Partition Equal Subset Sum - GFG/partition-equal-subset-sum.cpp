//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool part(int arr[], vector<vector<int>>& dp, int ind, int sum, int ns){
        if(sum == ns) return true;
        if(ind == 0) {
            if(sum == ns) return true;
            else return false;
        }
       if(dp[ind][sum] != -1) return dp[ind][sum];
       int take = 0;
       if(sum >= ns)
          take = part(arr, dp, ind - 1, sum - arr[ind], ns + arr[ind]);
       int notTake = part(arr, dp, ind - 1, sum , ns);
       return dp[ind][sum] = take || notTake;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = accumulate(arr, arr + N, 0);
        vector<vector<int>> dp(N, vector<int> (sum + 1, -1));
        return part(arr, dp, N - 1, sum, 0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends