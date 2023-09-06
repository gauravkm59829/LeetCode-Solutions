//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int cnt = 0;
    // bool dfs(vector<int> adj[], vector<int>& vis, int source, int parent){
    //     vis[source] = 1;
        
    //     for(auto it: adj[source]){
    //         if(vis[it]){
    //           if() return true;
    //         } else {
    //             cnt++;
    //             dfs(adj, vis, it, source);
    //         }
    //     }
    //     return false;
    // }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V + 1, -1);
	    queue<int> q;
	    for(int i = 0; i < V; i++){
	        if(color[i] == -1){
         	    q.push(i);
	            color[i] = 0;
	            while(!q.empty()){
	             auto source  = q.front();
	             q.pop();
	             for(auto it: adj[source]){
	               if(color[it] == -1){
	                  color[it] = !color[source];
	                  q.push(it);
	                 } else if(color[it] == color[source]) return false;
	              }
	            }
	        }
	    }
	     
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends