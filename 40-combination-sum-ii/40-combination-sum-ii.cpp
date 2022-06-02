class Solution {
public:
    void findcombination(int ind, int target, vector<int>&arr, vector<vector<int>> &ans, vector<int> &ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind; i<arr.size(); i++){
            if(i>ind && arr[i]==arr[i-1]) //**** i>ind very important go to video
                continue;
            if(arr[i]>target)
                break;
            
            ds.push_back(arr[i]);
            findcombination(i+1, target-arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //CODE STARTS HERE
        //first we need to sort this array in lexicographically order
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0, target, candidates, ans, ds);
        return ans;
    }
};