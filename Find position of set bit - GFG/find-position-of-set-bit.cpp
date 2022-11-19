//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int d = 1,cnt = 0,pos;
        if(N == 0) return -1;
        while(N > 0){
            if(N & 1){
              cnt++;
              pos = d;
            }
            d++;
            N >>= 1;
        }
        if(cnt == 1) return pos;
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends