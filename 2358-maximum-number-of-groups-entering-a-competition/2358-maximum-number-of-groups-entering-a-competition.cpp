class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int k = 0, cnt = 0,n = grades.size();
        for(int i = 0; i < n; ){
            if(i + k  < n){
                cnt++;
                i = i + k + 1;
                k++;
            } else
                break;
        }
        
        return cnt;
    }
};