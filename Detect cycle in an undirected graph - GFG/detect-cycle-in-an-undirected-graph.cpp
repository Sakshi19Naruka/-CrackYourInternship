// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
//   bool bfs(int i, int V, vector<int> &vis, vector<int> adj[]){
//         queue<pair<int, int>> q;
//         q.push({i, -1});
//         while(!q.empty()){
//             int curr = q.front().first;
//             int prev = q.front().second;
//             vis[curr] = 1;
//             q.pop();
//             for(auto it : adj[curr]){
//                 if(!vis[it]){
//                     vis[it] = 1;
//                     q.push({it, curr});
//                 }else if(vis[it] == 1 && prev != it){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
    
    
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
//         vector<int> vis(V, 0);
//         for(int i = 0; i < V; i++){
//             if(!vis[i]){
//                 if(bfs(i, V, vis, adj)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
  
  bool checkForCycle(int s, int V, vector<int> adj[], vector<int> &visited)
    {
        // Create a queue for BFS
        queue<pair<int, int>> q;
        
        q.push({s, -1});
        while (!q.empty())
        {
            int node = q.front().first;
            int par = q.front().second;
            visited[node] = 1;
            q.pop();
 
            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    visited[it] = 1;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1, 0);
        int i=0;
        for(i=0; i<V; i++){    //for more than one component
            if(!vis[i]){
                if(checkForCycle(i, V, adj, vis))
                  return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
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
}  // } Driver Code Ends