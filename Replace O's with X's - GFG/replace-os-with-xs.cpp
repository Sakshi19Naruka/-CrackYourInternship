//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &mat, int dx[], int dy[]){
        int n = mat.size();
        int m = mat[0].size();
        vis[row][col] = 1;
        //check in all four direction
        for(int i=0; i<4; i++){
            int nrow = row + dx[i];
            int ncol = col + dy[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow, ncol, vis, mat, dx, dy);
            }
        }
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> vis(n, vector<int>(m,0));
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        //traverse first and last row
        for(int j=0; j<m; j++){
            //first row
            if(mat[0][j]=='O'){
                dfs(0, j, vis, mat, dx, dy);
            }
            //last row
            if(mat[n-1][j]=='O'){
                dfs(n-1, j, vis, mat, dx, dy);
            }
        }
        
        //traverse first and last column
        for(int i=0; i<n; i++){
            //first col
            if(mat[i][0]=='O'){
                dfs(i, 0, vis, mat, dx, dy);
            }
            //last row
            if(mat[i][m-1]=='O'){
                dfs(i, m-1, vis, mat, dx, dy);
            }
        }
        
        //Remaining O's will convert into X
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]=='O' && !vis[i][j]){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends