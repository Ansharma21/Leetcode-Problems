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
                bool ans = iscyclebfs(i , vis , adj);
                if(ans)return true ;
            }
        }
        return false ;
    }
    bool iscyclebfs(int node , unordered_map<int , bool>&vis , vector<int> adj[]){
        unordered_map<int , int>parent;
        parent[node] = -1;
        vis[node] = true ;
        queue<int>q;
        q.push(node);
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            for(auto i : adj[fr]){
                if(!vis[i]){
                    q.push(i);
                    parent[i] = fr ;
                    vis[i] = true ;
                }
                else if(i != parent[fr]){
                    return true ;
                }
            }
        }
        return false ;
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