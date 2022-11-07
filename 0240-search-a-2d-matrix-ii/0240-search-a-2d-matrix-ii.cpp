class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size() - 1;
        int l = 0, r = m;
        while(l < n && r >= 0){
            if(v[l][r] == target) return true;
            else if(v[l][r] > target) r--;
            else l++;
        }
      
        return false;
    }
};