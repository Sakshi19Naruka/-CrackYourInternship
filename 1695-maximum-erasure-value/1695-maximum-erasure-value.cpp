 // using 2-Pointers and Frequency array
// TC - O(N) , SC - O(1)
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size(), curr_sum=0, ans=0, l=0, r=0;
        bool freq[10001] {false};   // bcoz 1 <= nums[i] <= 10000  given
        while(r<n){
            while(freq[nums[r]]){
                curr_sum -= nums[l];   
                freq[nums[l++]] = false;
            }
            
            curr_sum += nums[r];
            freq[nums[r++]] = true;
            ans = max(ans, curr_sum);
        }
       return ans; 
    }
};