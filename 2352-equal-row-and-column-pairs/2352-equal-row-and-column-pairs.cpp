class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(),fg = 1,cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j  = 0; j < n; j++){
                fg = 1;
                for(int k = 0; k < n; k++){
                    if(grid[i][k] != grid[k][j]){
                        fg = 0;
                        break;
                    }
                }
                if(fg) cnt++;
            }
        }
        return cnt;
    }
};