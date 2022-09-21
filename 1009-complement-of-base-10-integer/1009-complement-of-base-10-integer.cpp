class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        
        if(n==0){
            return 1;
        }
        
        while(m!=0){             /*same logic as previous*/
            mask = mask<<1;
            mask = mask | 1;
            m = m>>1;
        }
        
        int ans = n ^ mask;   
        /*can also do---> ans = (~n) & mask */
        return ans;
    }
};