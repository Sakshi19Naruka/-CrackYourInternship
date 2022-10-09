class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;
        
        int count=0;
        int total = row*col;
        
        while(count < total){
            //print starting row
            for(int j=startCol; j<=endCol && count<total; j++){
                ans.push_back(matrix[startRow][j]);
                count++;
            }
            startRow++;
            
            //print ending col
            for(int i=startRow; i<=endRow && count<total; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //print ending row
            for(int j=endCol; j>=startCol && count<total; j--){
                ans.push_back(matrix[endRow][j]);
                count++;
            }
            endRow--;
            
            //print starting col
            for(int i=endRow; i>=startRow && count<total; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
            
        }
        return ans;
    }
};