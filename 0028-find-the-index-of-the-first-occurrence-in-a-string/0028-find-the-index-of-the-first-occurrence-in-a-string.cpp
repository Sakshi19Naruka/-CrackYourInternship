class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        
        if(h<n) 
            return -1;
        
        string str;
        for(int i=0; i<=h-n; i++){
            str = haystack.substr(i,n);   //[)
            if(str == needle)
                return i;
        }
          return -1;  
    }
};