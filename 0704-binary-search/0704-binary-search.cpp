class Solution {
private:
    int binarySearch(vector<int>& nums, int s, int e, int target){
        int mid = s+ (e-s)/2;
        
        while(s<=e){
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] >= target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
                mid = s+ (e-s)/2;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;
        ans = binarySearch(nums, 0, n-1, target);
        return ans;
    }
};