class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size();
        if(target < v[0][0] || target > v[n - 1][m - 1]) return false;
        for(int i = 0; i < n; i++){
                if(v[i][0] <= target && v[i][m - 1] >= target){
                    int low = 0;
                    int high = m - 1;
                    while(low <= high){
                        int mid = (low + high) / 2;
                        if(v[i][mid] == target) return true;
                        else if (v[i][mid] > target) high = mid - 1;
                        else low = mid + 1;
                    }
                }
            }
        return false;
    }
};