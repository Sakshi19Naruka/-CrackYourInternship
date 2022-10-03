class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;
        string result;
        
        for(int i=0; i<s.length(); i++){
            string word;       // inside hi initialise krna jaruri h 
            if(s[i] == ' '){
               continue;       //skip spaces
            }
            
            while(i<s.length() && s[i] != ' '){
                word += s[i];
                i++;
            }
            st.push(word);   //push word into stack 
        }
        
        while(!st.empty()){
            result += st.top();
            st.pop();
            if(!st.empty())
                result += " ";
        }
        return result;
    }
};