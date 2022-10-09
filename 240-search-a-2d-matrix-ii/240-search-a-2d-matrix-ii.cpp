class Solution {
    // Love babbar bhaiya approach -->1st row k last col wale element se start kiya h 
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        //1st row k last col wale element se start kiya h
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex<row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            
            if(element == target)
                return true;
            else if(element < target) //it means us row me to exist nhi kr rha hoga
                rowIndex++;
            else                      //it means us col me to exist nhi kr rha hoga
                colIndex--;
        }
        return false;
    }
};