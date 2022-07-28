class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==1 || t.size()==1){
            if(s!=t)
                return false;
        }
            
        sort(s.begin(), s.end()+1);
        sort(t.begin(), t.end()+1);
        if(s==t)
            return true;
        else
            return false;
    }
};