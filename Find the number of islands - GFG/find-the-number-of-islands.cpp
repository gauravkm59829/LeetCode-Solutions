//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row, int col, int n, int m){
            queue<pair<int,int>> q;
            q.push({row,col});
            vis[row][col] = 1;
            while(!q.empty()){
              auto front = q.front();
              q.pop();
              for(int i = -1; i <= 1; i++){
                 for(int j = -1; j <= 1; j++){
                     int newRow = front.first + i;
                     int newCol = front.second + j;
                     if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] == '1' && !vis[newRow][newCol]){
                         q.push({newRow,newCol});
                         vis[newRow][newCol] = 1;
                     }
                 }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n + 1, vector<int>(m + 1, 0));
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    ans++;
                    bfs(grid,vis,i,j,n,m);
                }
            }

        }
        return ans;
     }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends