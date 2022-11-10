class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,ind = INT_MAX;
        int n = nums.size();
        vector<int> prefS(n);
       for(int i = 0; i < n; i++){
           if(i == 0)
               prefS[i] = nums[i];
           else
               prefS[i] = prefS[i - 1] + nums[i];
        //   cout << prefS[i] << " ";
          
       }
        
       for(int i = 0;i < n; i++){
           int l = i;
           int r = n - 1;
           while(l <= r){
               int mid = (l + r) / 2;
              // cout << mid << "\n";
               int ns = (i == 0) ? (0) : (prefS[i - 1]); 
               //cout << (prefS[mid] - ns)  << "\n";
               if(prefS[mid] - ns >= target){
                   ind = min(ind,mid - i);
                   r = mid - 1;
               } else 
                   l = mid + 1;
              // cout << ind << "\n";
           }
       }
        
        
        return (ind == INT_MAX) ? (0) : (ind + 1);
    }
};