class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size = original.size();
        
        if(size != (m*n))
            return {};
        
            vector<vector<int>> twoDarray;
            for(int i=0; i<m*n; i+=n){
                //0-(n-1)  n-(2n-1)  and so on
                twoDarray.push_back(vector<int>(original.begin()+i, original.begin()+i+n));
            }
    
        return twoDarray;
    }
};