
// T.C - O(N)


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        //base case
        if(n==0)
            return 0;
        
        int maxArea = 0;
        vector<int> left(n);  //left boundary
        vector<int> right(n);   //right boundary
        
        left[0] = -1;
        right[n-1] = n;
        
        for(int j=1; j<n; j++){
            int prev = j-1;   //previous for comparing the heights
            
            while(prev>=0 && heights[prev]>=heights[j]){
                prev = left[prev];
            }
            left[j] = prev;
        }
        
        //Similarly we will do for right
        for(int j=n-2; j>=0; j--){
            int prev = j+1;   //previous for comparing the heights
            
            while(prev<n && heights[prev]>=heights[j]){
                prev = right[prev];
            }
            right[j] = prev;
        }
        
        //once we have these two arrays fill, then we need width and height
        for(int i=0; i<n; i++){
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i]*width);
        }
        return maxArea;
    }
};