//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n = nums.size(), ans = 0;
	    
	    for(int i = 1; i < n - 1; i++){
	        int l = i - 1;
	        int r = i + 1;
	        int sm = 0, lg = 0;
	        while(l >= 0){
	            if(nums[l] < nums[i])
	             sm++;
	            l--;
	        }
	        while(r < n){
	              if(nums[r] > nums[i])
	                lg++;
	               r++; 
	            } 
	            ans += sm * lg;
	        }
	        
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends