class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;      //current index
        int ansIndex=0;    //solution index
        int n = chars.size();
        int count = 1;
        
        while(i<n){
            int j = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //loop se bahr when yaa to poora vector traverse ho chuka ya diff char aa gya
            
            //oldChar store
            chars[ansIndex++] = chars[i];
            int count = j-i;
            
            if(count>1){
                string cnt = to_string(count);  //pehle integer ko string bnaya  
                for(auto ch: cnt){            //fir uss string ka ek ek character uttha liya
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        
        return ansIndex;
    }
};