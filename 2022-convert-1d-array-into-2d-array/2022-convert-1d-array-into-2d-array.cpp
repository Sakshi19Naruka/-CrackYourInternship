class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k=0;  // or indexing original array
        if(m*n != original.size())
            return {};   
        
        vector<vector<int>> ans;
        for(int i=0; i<m; i++){
            //bcoz 2D vector k ander vector hi store hota h direct elements nhi
            vector<int> temp;     
            for(int j=0; j<n; j++){
                temp.push_back(original[k++]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};