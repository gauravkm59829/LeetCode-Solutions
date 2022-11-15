class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int k = 0, cnt = 0,n = grades.size(), i = 0;
        while(i + k  < n){
                cnt++;
                i = i + k + 1;
                k++;
          }
        
        return cnt;
    }
};