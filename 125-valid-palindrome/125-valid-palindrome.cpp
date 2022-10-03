class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
            return 1;
        return 0;
    }
    
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch;
        else{
            char temp = ch - 'A' +'a';
            return temp;
        }
    }
    
    bool checkPalindrome(string a){
        int s=0;
        int e=a.length()-1;
        
        while(s<e){
            if(a[s] != a[e])
                return false;
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    
public:
    bool isPalindrome(string s) {
        //step 1 faltu character htaa do , ek nyi string me sare kaam k character
        string newStr = "";
        
        for(int i=0; i<s.size(); i++){
            if(valid(s[i])){
                newStr.push_back(s[i]);
            }
        }
        
        //step 2 -> sbko lower case me krdo
        for(int i=0; i<newStr.length(); i++){
           newStr[i] = toLowerCase(newStr[i]);
        }
        
        //step 3 check palindrome
        return checkPalindrome(newStr);
    }
};