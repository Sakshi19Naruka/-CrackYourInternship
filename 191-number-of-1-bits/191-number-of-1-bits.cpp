class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0; // count of 1's in binary representation
        
        while(n!=0){
            // we have to check the last bit 
            if(n&1){      
                count++;
            }
            n = n>>1;  // right shift till it will not become 0
        }
        return count;
    }
};