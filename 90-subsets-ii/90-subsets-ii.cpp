// for bruteforce go to video or Subset Sums(GFG) 
// tc -  2^n * n
//sc - O(2^n) * O(K)
class Solution {
public:
     void findsubsets(int ind, vector < int > & arr, vector < int > & ds, vector < vector < int >> & ans) {
        ans.push_back(ds);
        // here no need to write basecase
        // jese hi index se bahr jaega basecase se bahr aa jaega 
        for(int i=ind; i<arr.size(); i++){
            if(i!=ind && arr[i]==arr[i-1])
                continue;
            ds.push_back(arr[i]);
            findsubsets(i+1, arr, ds, ans);
            ds.pop_back();
        }
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //Code starts here
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findsubsets(0, nums, ds, ans);
        return ans;
    }
};