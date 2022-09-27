// Binary Search Approach

// A problem arose that ---- what if mid*mid is out of range of Integer so hmko ek alg se binary search ka function bnana padega jiska type long long int lena hoga
class Solution {
public:
    
    long long int binarySearch (int n){
        // It is sure that ans(Square root) lies in the range of 0 to n
        
        int s=0, e=n; // s=start, e=end
        long long int mid = s+(e-s)/2;   //mid and ans ka type bhi long long int
        long long int ans = -1;
        
        while(s<=e){     //Apply Binary Search
            
            long long int square = mid * mid;
            if(square > n){
                e = mid-1;
            }
                
            else if(square < n){
                ans = mid;
                s = mid+1;
            }
            
            else
                return mid;
              
            mid = s+(e-s)/2;
        }
        return ans;
    }
    
    
    int mySqrt(int x) {
        return binarySearch(x);
        
    }
};