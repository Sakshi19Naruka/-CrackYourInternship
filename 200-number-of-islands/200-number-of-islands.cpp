class Solution {
public:
    void explore_curr_island(vector<vector<char>> &matrix, int x, int y, int r, int c){
        //corner cases
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')
            return;
        matrix[x][y] = '2';
        
        //Make recursive call in all 4 adjacent directions
        explore_curr_island(matrix, x+1, y, r, c);
        explore_curr_island(matrix, x, y+1, r, c);
        explore_curr_island(matrix, x-1, y, r, c);
        explore_curr_island(matrix, x, y-1, r, c);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        //Code starts from here
        int rows = grid.size();
        if(rows==0) 
            return 0;
        int cols = grid[0].size();
        
        int no_of_islands = 0;
        //Iterate for all cells of the array
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]=='1'){
                    explore_curr_island(grid, i, j, rows, cols);
                    no_of_islands += 1;
                }
            }
        }
        return no_of_islands;
    }
};