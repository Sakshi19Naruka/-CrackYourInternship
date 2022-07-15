class Solution {
public:
    int explore_curr_island(vector<vector<int>> &matrix, int &size, int x, int y, int r, int c){
        //corner cases
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!=1)
            return 0;
        matrix[x][y] = 2;
        size += 1;
        
        //Make recursive call in all 4 adjacent directions
        explore_curr_island(matrix, size, x+1, y, r, c);
        explore_curr_island(matrix, size, x, y+1, r, c);
        explore_curr_island(matrix, size, x-1, y, r, c);
        explore_curr_island(matrix, size, x, y-1, r, c);
        return size;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //Code starts from here
        int rows = grid.size();
        if(rows==0) 
            return 0;
        int cols = grid[0].size();
        
        // int no_of_islands = 0;
        int maxSize = 0;
        //Iterate for all cells of the array
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    int size = 0;
                  maxSize = max(maxSize,explore_curr_island(grid, size, i, j, rows, cols));
                    // no_of_islands += 1;
                }
            }
        }
        return maxSize;
    }
};