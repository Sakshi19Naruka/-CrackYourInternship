class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit;
        int prod = 1, sum = 0, ans;
        while(n){                   
            digit = n%10;          
            prod *= digit;
            sum += digit;
            n /= 10;
        }
        ans = prod - sum;
        return ans;
    }
};