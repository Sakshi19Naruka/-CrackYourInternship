class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int s=0, e=nums.size()-1, mid, num;
        
        while(s < e){
            mid = s+(e-s)/2;
            num = (mid%2 == 0) ? mid+1 : mid-1;
            if(nums[mid]==nums[num]) 
                s = mid+1;
            else 
                e = mid;
        }
        return nums[s];
    }

};
