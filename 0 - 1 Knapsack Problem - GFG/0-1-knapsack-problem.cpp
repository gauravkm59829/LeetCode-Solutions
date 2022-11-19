//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int maxVal(int W, int wt[], int val[],vector<vector<int>>& dp, int ind, int n){
        if(ind == n - 1){
            if(W - wt[ind] < 0) return 0;
            else return val[ind];
        }
        
        if(dp[ind][W] != -1) return dp[ind][W];
        int pick = 0 ;
        if(W - wt[ind] >= 0){
            pick = val[ind] + maxVal(W - wt[ind], wt, val, dp, ind + 1, n); 
        }
        int notPick = maxVal(W, wt, val, dp, ind + 1, n);
        return dp[ind][W] = max(pick,notPick);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n + 1, vector<int>(1001, -1));
       return maxVal(W, wt, val, dp, 0, n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends