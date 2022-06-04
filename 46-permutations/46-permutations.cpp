//brute force 
// TC - n! * N   (total permutations n!, run for loop each time - total N times)
// SC - O(N) + O(N)   One is for ds, other is for map

class Solution {
    private: 
    void recurpermute(vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums, int freq[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0; i<nums.size();i++){
            if(!freq[i]){ // if already status 1 nhi h, it means use pick kr skte h
                ds.push_back(nums[i]);
                freq[i] = 1; // status update
                recurpermute(ds, ans, nums, freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // code starts from here
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];  // it is a map which will take care of status
        for(int i=0; i<nums.size();i++)  freq[i]=0; 
        //another way to initialise int freq[nums.size()] = {0};
        recurpermute(ds, ans, nums, freq);
        return ans;
    }
};