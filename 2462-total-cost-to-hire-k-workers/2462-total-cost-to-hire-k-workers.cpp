class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long n = costs.size(),cost = 0,l = 0;
        int r = n - 1;
        priority_queue<int,vector<int>,greater<int>> pq1;
        priority_queue<int,vector<int>,greater<int>> pq2;
        
        while(l < candidates){
            pq1.push(costs[l++]);
        }
        
        while(r > n - candidates - 1 && r >= l){
            pq2.push(costs[r--]);
        }
        if(pq2.empty()){
            while(k--){
                int num = pq1.top();
                cost += num;
                pq1.pop();
            }
        } else {
            while(k--){
                int num1,num2;
                if(!pq1.empty()){
                   num1 = pq1.top();
                } else 
                   num1 = INT_MAX;
                if(!pq2.empty()){
                   num2 = pq2.top(); 
                } else
                   num2 = INT_MAX;
                if(num1 <= num2){
                    pq1.pop();
                    cost += num1;
                    if(l <= r){
                       pq1.push(costs[l++]);
                    }
                } else {
                    pq2.pop();
                    cost += num2;
                    if(r >= l){
                     pq2.push(costs[r--]);
                    }
            }
                //cout << cost << "\n";
          }
            
        }
            
          return cost;
    }
};