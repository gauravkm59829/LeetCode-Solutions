class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        int pr = 1;
        int cur = 1;
        for(int i = 1; i <= n; i++){
            money += cur;
            cur++;
            if(i % 7 == 0){
                pr++;
                cur = pr;
            }
        }
        
        return money;
    }
};