class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size(), ar = 1;
        
        sort(points.begin(),points.end());
        int mn = points[0][1];
        for(int i = 1; i < n; i++){
            if(points[i][0] > mn){
                ar++;
                mn = points[i][1];
            } else {
                if(points[i][1] < mn){
                    mn = points[i][1];
                }
            }
        }
        
        return ar;
    }
};