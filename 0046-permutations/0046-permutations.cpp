class Solution {
private:
    void permute(vector<int> nums, int index, vector<vector<int>> &ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=index; j<nums.size(); j++){
            swap(nums[index], nums[j]);
            permute(nums, index+1, ans);
            //backtrack
            swap(nums[index], nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        permute(nums, 0, ans);
        
        return ans;
    }
};