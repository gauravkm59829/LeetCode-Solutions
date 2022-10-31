class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        vector<int> ans;
        for(int i = 0; i < n - 1; i++){
            int sum = numbers[i];
            int l = i + 1;
            int h = n - 1;
            int fg = 0;
            while(l <= h){
                int mid = (l + h) / 2;
                if(sum + numbers[mid] == target){
                    fg = 1;
                    ans.push_back(i + 1);
                    ans.push_back(mid + 1);
                    break;
                } else if(sum + numbers[mid] > target){
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
              }
            if(fg) break;
        }
       return ans;
    }
};