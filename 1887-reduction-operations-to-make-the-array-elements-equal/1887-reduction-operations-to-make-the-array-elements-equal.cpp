class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size(),op = 0,prev = 0;
        set<int> st;
        unordered_map<int,int> mp;
        int num = nums[0];
        
        for(auto it : nums){
            mp[it]++;
            st.insert(it);
        }
        auto it2 = st.end();
        --it2;
        while(true){
           // cout << *(it2) << "\n";
            if(it2 != st.begin()){
                mp[(*it2)] += prev;
                op += mp[*(it2)];
                prev = mp[*(it2)];
            } else 
                break;
           // cout << op << "\n";
            it2--;
        }
        
        return op;
    
    }
};