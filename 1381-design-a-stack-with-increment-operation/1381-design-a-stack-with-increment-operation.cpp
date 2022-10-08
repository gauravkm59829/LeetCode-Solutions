class CustomStack {
public:
    int n;
    vector<int> ans;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(ans.size() < n)
            ans.push_back(x);
    }
    
    int pop() {
       if(!ans.size())
        return -1;
       int tp = ans.back();
       ans.pop_back();
        return tp;
    }
    
    void increment(int k, int val) {
        int el = k;
        if(ans.size() < k)
            el = ans.size();
         for(int i = 0; i < el ; i++){
             ans[i] += val;
         }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */