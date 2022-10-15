class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            { // when there is a match then increase both the pointers
                i++;
                j++;
                if(j==needle.size()) // if the whole pattern has been matched then return
                    return i-needle.size();  
            }
            else
            { 
                i=i-j+1;  // Why we did not write i++ bcoz it will fail in eg. butstad and sad
                j=0; 
            }            
        }   
        return -1;
    }
};