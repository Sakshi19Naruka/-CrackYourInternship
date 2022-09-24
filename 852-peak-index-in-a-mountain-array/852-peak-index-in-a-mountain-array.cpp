class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        int mid = low + (high-low)/2;
        
        // binary search approach
        
        while(low<high){
            if(arr[mid]<arr[mid+1]){
                low = mid + 1;
            }
            else{    // bcoz mid hi peak hua to .....isiliye high = mid-1 nhi kiya high=mid kiya .LOVE BABBAR LECTURE 12 
                high = mid;
            }
           mid = low + (high-low)/2;
        }
        return low;
    }
};