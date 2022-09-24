class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        
        while(low<high){
            if(arr[low]<arr[low+1]){
                low++;
            }
            else{
                return low;
            }
            if(arr[high]<arr[high-1]){
                high--;
            }
        }
        return low;
    }
};