//without using extra data structure(map in previous) 
// TC - n! * N   (total permutations n!, run for loop each time - total N times)
// SC - O(N)    Only auxilliary space

class Solution {
    private: 
    void recurpermute(int index, vector<vector<int>> &ans, vector<int> &nums){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index; i<nums.size();i++){
            swap(nums[index], nums[i]);
            recurpermute(index+1, ans, nums);
            swap(nums[index], nums[i]);   //reswap (backtracking)
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // code starts from here
        vector<vector<int>> ans;
        vector<int> ds;
        recurpermute(0, ans, nums);
        return ans;
    }
};