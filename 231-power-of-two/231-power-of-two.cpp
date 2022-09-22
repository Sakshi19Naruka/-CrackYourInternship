 /*if no. of set bits in binary representation of a number == 1 then it means that number is a power of 2 */


class Solution {
public:
    
   bool isPowerOfTwo(int n) {
     if (n <= 0) {
     return false;
   }
    
   bitset<32> bset(n);
   if(bset.count() == 1){
       return true;
    }
       return false;
}
};
