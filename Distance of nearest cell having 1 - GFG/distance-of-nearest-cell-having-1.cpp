//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<bool>> vis(n, vector<bool>(m,false));
	    vector<vector<int>> dist(n, vector<int>(m, 0));
	    queue<pair<pair<int,int>, int>>q;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(grid[i][j]==1){
	                q.push({{i,j},0});
	                vis[i][j] = true;
	            }
	            else{
	                vis[i][j] = false;
	            }
	        }
	    }
	    
	    int dx[4] = {-1, 0, 1, 0};
	    int dy[4] = {0, 1, 0, -1};
	    
	    while(!q.empty()){
	        int r = q.front().first.first;
	        int c = q.front().first.second;
	        int d = q.front().second;
	        q.pop();
	        dist[r][c] = d;
	        
	        for(int i=0; i<4; i++){
	            int nrow = r + dx[i];
	            int ncol = c + dy[i];
	            //check is valid or not
	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==0){
	                vis[nrow][ncol] = true;
	                q.push({{nrow,ncol}, d+1});
	            }
	        }
	    }
	    return dist;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends