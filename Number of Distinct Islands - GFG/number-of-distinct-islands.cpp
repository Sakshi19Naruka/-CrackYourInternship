//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>>& grid, vector<pair<int,int>> &vec, int row0, int col0){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        vec.push_back({row-row0, col-col0});  //base substract krke ush karenge
        
        int dx[4] = {0,-1,0,1};
        int dy[4] = {1,0,-1,0};
        for(int i=0; i<4; i++){
            int newr = row + dx[i];
            int newc = col + dy[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && grid[newr][newc]==1){
                dfs(newr, newc, vis, grid, vec, row0, col0);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        set<vector<pair<int, int>>> st;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>> vec;
                    dfs(i, j, vis, grid, vec, i, j);
                    st.insert(vec);
                }
            }
        }
        //TC - (n * m * log(n*m)) + (n*m*4)  
        //     for loop              dfs
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends