class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gcd = 0;
        priority_queue<int,vector<int>, greater<int>> pq;
        for(auto it: nums)
            pq.push(it);
        for(auto it : numsDivide){
            gcd = __gcd(gcd,it);
        }
        
        int cnt = 0;
        while(!pq.empty()){
            int smallest = pq.top();
            if(gcd % smallest == 0) return cnt;
            cnt++;
            pq.pop();
        }
        
        return -1;
    }
};