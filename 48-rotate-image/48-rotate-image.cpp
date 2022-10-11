class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        //step 1
        int startRow = 0;
        int endRow = n-1;
        while(startRow<endRow){
            for(int j=0; j<n; j++){
                swap(matrix[startRow][j], matrix[endRow][j]);
            }
            startRow++;
            endRow--;
        }
        
        //Step 2
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>j)
                    continue;
                else{
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
    
    }
};