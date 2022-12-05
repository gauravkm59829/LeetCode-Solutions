// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int ind1 = -1,ind2 = -1;
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
        if(mp[x] == 1 && arr[i] == x){
        ind1 = i;
        ind2 = i;
      }
          
    }
    
    for(int i = 0; i < n; i++){
        mp[arr[i]]--;
        if(arr[i] == x && mp[x] == 0){
            ind2 = i;
            break;
        }
    }
    
    return {ind1,ind2};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends