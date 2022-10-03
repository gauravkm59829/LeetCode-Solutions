class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length();
        int minT = 0, l = 0;
        while(l < n - 1){ 
            if(colors[l] == colors[l + 1]){
                int mn = neededTime[l];
                int r = l;
                while((colors[r] == colors[r + 1]) && r < n - 1){
                 if(neededTime[r + 1] < mn){
                     minT += neededTime[r + 1];
                 } else {
                     minT += mn;
                     mn = neededTime[r + 1];
                 }
                    r++;
            }
                l = r + 1;
          } else l++;
        }
        
        return minT;
    }
};