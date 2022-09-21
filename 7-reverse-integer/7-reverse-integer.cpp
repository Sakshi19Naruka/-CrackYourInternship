class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x != 0){
            
            int digit = x%10;
            
            //INT_MAX = -2^31, INT_MIN = 2^31-1   which is the range of integer 
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){ 
                return 0;
            }
            
            ans = (ans * 10) + digit;
            x = x/10;
        }
        return ans;
        
    }
};
               
            /* if((ans*10 > INT_MAX) || (ans*10 < INT_MIN){
                return 0;
            }
            */ 
            // wrong bcoz ans*10 to int me store ho hi nhi paega to compare kese karega fir 