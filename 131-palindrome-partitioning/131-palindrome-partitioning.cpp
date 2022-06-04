class Solution {
public:
  
    // it tells ki palindrome bn rha h ya nhi
        bool isPalindrome(string s, int start, int end){
                while(start<=end){
                    if(s[start++] != s[end--]){
                        return false;
                    }
                }
            return true;
        }
    
    void func(int index, string s, vector<string> &path, vector<vector<string>> &res){
        //base condition
        if(index == s.size()){
            res.push_back(path);   //means vo partition valid h ans. me 
            return;
        }
        
        for(int i = index; i<s.size(); ++i){
            if(isPalindrome(s, index, i)){  
                path.push_back(s.substr(index,i-index+1));
                func(i+1, s, path, res);
                path.pop_back();    // don't forget to pop
            }
        }     
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0, s, path, res);
        return res;
    }
};