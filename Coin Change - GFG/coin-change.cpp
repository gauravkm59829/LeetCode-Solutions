//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long ways(int coins[],vector<vector<long long>>& dp, int ind, int sum){
      if(sum == 0) return 1;
      if(sum < 0) return 0;
      if(ind == 0){
          if(sum % coins[ind] == 0) return 1;
          return 0;
      }
      
      if(dp[ind][sum] != -1) return dp[ind][sum];
      
      long long take = 0;
      if(sum >= coins[ind]){
           take = ways(coins, dp, ind, sum - coins[ind]);
      }
      long long notTake = ways(coins, dp, ind - 1, sum);
      
      return dp[ind][sum] = take + notTake;
  }
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long>> dp(N, vector<long long> (sum + 1, -1));
        return ways(coins, dp, N - 1 ,sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends