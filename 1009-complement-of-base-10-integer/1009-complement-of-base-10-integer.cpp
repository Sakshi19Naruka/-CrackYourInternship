class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0, cnt = 0, ans = 0;
        
        if(n==0){
            ans = n | 1;
            return ans;
        }
        
        while(m!=0){
            m = m>>1;
            cnt++;
        }
        while(cnt){
            mask = mask<<1;
            mask = mask | 1;
            cnt--;
        }
        ans = n ^ mask;
        return ans;
    }
};