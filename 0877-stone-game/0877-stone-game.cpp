class Solution {
public:
  
     int score(vector<int>& piles, vector<vector<int>>& dp, int beg, int end){
        if(beg == end - 1){
            return max(piles[beg],piles[end]);
        }
        
        if(dp[beg][end] != -1) return dp[beg][end];
        
        int leftPick = piles[beg] + max(score(piles, dp, beg + 2, end) , score(piles, dp, beg + 1, end - 1)); 
        int rightPick = piles[end] + max(score(piles, dp, beg + 1, end - 1) , score(piles, dp, beg, end - 2));
        
        return dp[beg][end] = max(leftPick,rightPick);
        
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size(), sum = 0;
        for(int i = 0; i < n; i++){
          sum += piles[i];
        }
        
        vector<vector<int>> dp(n,vector<int> (n + 1, -1));
        
        int aliceSc = score(piles, dp, 0, n - 1);
        int bob = sum - aliceSc;
        if(aliceSc > bob) return true;
        return false;
    }
};