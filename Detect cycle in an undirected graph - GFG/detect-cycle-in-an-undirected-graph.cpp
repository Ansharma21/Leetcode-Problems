//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int , bool>vis;
        for(int i = 0 ; i<V ; i++){
            if(!vis[i]){
                bool ans = iscycledfs(i , -1 , vis , adj);
                if(ans)return true ;
            }
        }
        return false ;
    }
    bool iscycledfs(int node , int parent , unordered_map<int , bool>&vis , vector<int> adj[]){
        vis[node] = true ;
        for(auto i : adj[node]){
            if(!vis[i]){
                bool detected = iscycledfs(i , node , vis , adj);
                if(detected)return true ;
            }
            else if(vis[i] && i != parent){
                return true ;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends