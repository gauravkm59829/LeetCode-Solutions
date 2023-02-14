class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int num = 0,carry;
        int l = a.length() - 1, r = b.length() - 1;
        while(l >= 0 || r >= 0){
            int num1 = 0;
            int num2 = 0;
            if(l >= 0)
             num1 = a[l--] - '0';
            if(r >= 0) 
             num2 = b[r--] - '0';

             int num = (num1 + num2 + carry);
             carry = num / 2;
             ans += char((num % 2) + '0');
             cout << ans << "\n";
        }

        if(carry)
          ans += '1';
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};