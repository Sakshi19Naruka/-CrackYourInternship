// indirect question of subset , only constraint K(size)

class Solution {
public:
     
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        vector<vector<int>> ans;
        
        function(0, k , n, ds, ans);
        return ans;
    }
    
    void function(int index, int k, int n, vector<int> &ds, vector<vector<int>> &ans){
        //base case
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        
        for(int i=index; i<n; ++i){
            ds.push_back(i+1);
            function(i+1, k, n, ds, ans);
            ds.pop_back();
        }
    }
};