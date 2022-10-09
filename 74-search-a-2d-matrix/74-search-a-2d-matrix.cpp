class Solution {
private:
    bool binarySearch(int row, int col, vector<vector<int>>& arr, int target){
        int s=0, e=col-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            if(arr[row][mid] == target)
                return true;
            else if(arr[row][mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
             mid = s+(e-s)/2;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        bool ans;
        
        if(target<matrix[0][0] || target>matrix[row-1][col-1])
                return false;
        
        for(int i=0; i<row; i++){
           
            if(target<=matrix[i][col-1] && target>=matrix[i][0])
                ans = binarySearch(i, col, matrix, target);
            
            else{
                continue;
            }
        }
        return ans;
    }
};