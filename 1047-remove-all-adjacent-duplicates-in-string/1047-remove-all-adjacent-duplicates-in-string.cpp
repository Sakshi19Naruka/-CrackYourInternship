class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        string ans;
        ans.push_back(s[0]);
        
        for(int i=1; i<n; i++){
            if(s[i] == ans.back()){
                ans.pop_back();
            }
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};