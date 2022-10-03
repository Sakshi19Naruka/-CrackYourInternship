class Solution {
public:
    
    char toLowerCase(char ch){
        if(ch>=97 && ch<=122)
           return ch;
        else{
           char temp = ch - 'A' + 'a';
           return temp;
        }
    }
    
    bool isPalindrome(string s) {
        //Your code starts from here
        int st=0;
        int end=s.size()-1;
    
    while(st<=end){
        if(((s[st]>=97&&s[st]<=122)||(s[st]>=65&&s[st]<=90)||(s[st]>=48&&s[st]<=57)) && ((s[end]>=97&&s[end]<=122)||(s[end]>=65&&s[end]<=90)||(s[end]>=48&&s[end]<=57))){
            if(toLowerCase(s[st]) != toLowerCase(s[end]))
                return false;
            else{
                st++;
                end--;
            }
        }
           
        else if(!((s[st]>=97&&s[st]<=122)||(s[st]>=65&&s[st]<=90)||(s[st]>=48&&s[st]<=57)) )         {
            st++;
        } 
           
        else if(!((s[end]>=97&&s[end]<=122)||(s[end]>=65&&s[end]<=90)||(s[end]>=48&&s[end]<=57)) ){
            end--;
        }     
        
    }
    
    return true;

    }
};