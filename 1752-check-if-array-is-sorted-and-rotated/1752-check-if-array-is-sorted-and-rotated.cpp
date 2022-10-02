class Solution {
public:
    bool check(vector<int>& nums) {
        int pair_cnt=0;  // pair when nums[i-1] > nums[i]
        int n = nums.size();
        
        for(int i=1; i<n; i++){
            if(nums[i] < nums[i-1]){
                pair_cnt++;
            }
        }
        
        if(nums[n-1] > nums[0])
            pair_cnt++;
        
        return pair_cnt <= 1;  
        // means return true if cnt is 0 or 1 and return false when it is more than 1
        
    }
};