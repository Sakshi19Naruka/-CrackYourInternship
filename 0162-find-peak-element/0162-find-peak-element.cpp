class Solution {
    
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
    
         while(s<=e){
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else{
                if(nums[mid]>nums[mid-1]){  //left line
                    s = mid+1;
                }
                else{                    //right line
                    e = mid;      
                }
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
};