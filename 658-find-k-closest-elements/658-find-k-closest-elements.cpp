class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            v[i].first = abs(x - arr[i]);
            v[i].second = i;
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0; i < k; i++){
        ans.push_back(arr[v[i].second]);
        }
                          
        sort(ans.begin(),ans.end());
       return ans;
    }
};