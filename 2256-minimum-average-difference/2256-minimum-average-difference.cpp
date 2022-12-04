class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        // long long sum = accumulate(nums.begin(),nums.end(),0);
        long long sum = 0;
        for(int i = 0; i < n; i++)
            sum += nums[i];
       
        long long ans = INT_MAX, sum1 = 0, ind;
        for(long long i = 0; i < n; i++){
            sum -= nums[i];
            sum1 += nums[i];
           // cout << sum << "\n";
            long long avg1 = sum1 / (i + 1);
            long long avg2;
            if(i == n - 1)
                avg2 = sum;
            else
                avg2 = sum / (n - i - 1);
            if(abs(avg1 - avg2) < ans){
                ind = i;
                ans = abs(avg1 - avg2);
            }
        }
        
        return ind;
    }
};