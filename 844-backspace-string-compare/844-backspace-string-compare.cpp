class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st_s;
        stack<char> st_t;
        string str1,str2;
        
        for(int i=0; i<s.size();i++){
            if(s[i] != '#'){
                st_s.push(s[i]);
            }
            else if(s[i] == '#' && !st_s.empty()){   //must check !st_s.empty() 
                st_s.pop();
            }
        }
        
        for(int j=0; j<t.size();j++){
            if(t[j] != '#'){
                st_t.push(t[j]);
            }
            else if(t[j] == '#' && !st_t.empty()){
                st_t.pop();
            }
        }
        if(st_s.size() != st_t.size())
            return false;
        else{
            while(!st_s.empty()){
                if(st_s.top()==st_t.top()){
                    st_s.pop();
                    st_t.pop();
                }
                  else{
                      return false;
                  }  
            }
            return true;
        }
        
        // or via string 
//         while(!st_s.empty()){
                 
//                  str1.push_back(st_s.top());
//                  st_s.pop();
                 
//          }
            
//          while(!st_t.empty()){
                 
//                  str2.push_back(st_t.top());
//                  st_t.pop();
                 
//          } 
//         return str1 == str2;   
    }
};