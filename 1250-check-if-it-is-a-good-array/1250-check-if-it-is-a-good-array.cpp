class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int gcd = 0;
        for(auto it : nums){
            gcd = __gcd(gcd,it);
        }
        return gcd == 1;
    }
};