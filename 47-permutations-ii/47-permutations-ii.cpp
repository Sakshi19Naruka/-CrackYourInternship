// class Solution {
//     private: 
//     void recurpermute(int index, vector<vector<int>> &ans, vector<int> &nums){
//         if(index==nums.size()){
//             ans.push_back(nums);
//             return;
//         }
        
//         for(int i=index; i<nums.size();i++){
//             if(i!=index && nums[i]==nums[index])  continue;  // fot duplicates
//             swap(nums[index], nums[i]);
//             recurpermute(index+1, ans, nums);
//             swap(nums[index], nums[i]);   //reswap (backtracking)
//         }
//     }
// public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//          // code starts from here
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end());  //must
//         recurpermute(0, ans, nums);
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int> nums,int idx)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
        }
        for(int i=idx;i<nums.size();i++)
        {
            if(i!=idx && nums[i]==nums[idx])    continue;
            swap(nums[i],nums[idx]);
            helper(nums,idx+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        helper(nums, 0);
        return ans;
    }
};