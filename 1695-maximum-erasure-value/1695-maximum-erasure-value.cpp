 // using 2-Pointers and HashSet
// TC - O(N)
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size(), curr_sum=0, ans=0, l=0, r=0;
        unordered_set<int> s;  //good in case of unique values
        while(r<n){
            while(s.find(nums[r]) != s.end()){
                curr_sum -= nums[l];   //duplicate milne k case me set me se erase and update curr_sum accordingly
                s.erase(nums[l++]);
            }
            
            curr_sum += nums[r];
            s.insert(nums[r++]);
            ans = max(ans, curr_sum);
        }
       return ans; 
    }
};