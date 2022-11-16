//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int l1 = 0, l2 = 0, l3 = 0;
            while(l1 < n1 && l2 < n2 && l3 < n3){
                if(A[l1] < B[l2])
                    l1++;
                else if(A[l1] == B[l2]){
                    if(A[l1] == C[l3]){
                        if(ans.size() == 0 || A[l1] != ans.back())
                        ans.push_back(A[l1]);
                        l1++;
                    } else if(A[l1] < C[l3]){
                        l1++;
                    } else {
                        l3++;
                    }
                } else {
                    l2++;
                }
            }
            
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends