class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==1)
            return true;
        
        int ans =1;
        while(ans<n && ans<INT_MAX/2 && ans>INT_MIN/2){
            ans *= 2;
        }
        if(ans != n){
            return false;
        }
        else {
            return true;
        }
    }
};