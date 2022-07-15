class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int Newcolor, int rows, int cols, int source){
        if(sr<0 || sr>=rows || sc<0 || sc>=cols)
            return;
        else if(image[sr][sc]!=source)
            return;
        
        image[sr][sc] = Newcolor;
        
        dfs(image, sr-1, sc, Newcolor, rows, cols, source); //Top
        dfs(image, sr+1, sc, Newcolor, rows, cols, source); //Down
        dfs(image, sr, sc-1, Newcolor, rows, cols, source); //Left
        dfs(image, sr, sc+1, Newcolor, rows, cols, source); //Right
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //code starts from here
        if(color == image[sr][sc]) // No need of adjacent calls
            return image;
        
        int rows = image.size();
        int cols = image[0].size();
        int source = image[sr][sc];
        
        dfs(image, sr, sc, color, rows, cols, source); 
        return image;
    }
};