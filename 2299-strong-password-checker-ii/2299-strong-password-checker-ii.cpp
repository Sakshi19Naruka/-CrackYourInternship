class Solution {
public:
bool strongPasswordCheckerII(string password) {
int lCase=0, uCase=0, digit=0, specialchar=0;
int n = password.size();
if(n<8) return false;

    for(int i=0; i<n; i++){
            if((int)password[i] >= 65 && (int)password[i] <= 90){
                uCase=1;
            }
            else if((int)password[i] >= 97 && (int)password[i] <= 122){
                lCase=1;
            }
            else if((int)password[i] >= 48 && (int)password[i] <= 57){
                digit=1;
            }
            else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+' || password[i]=='^'){
                specialchar=1;
            }
        }
        
        if(lCase == 0 || uCase == 0 || digit == 0 || specialchar == 0){
                 return false;  
        }
    
        for(int i=1; i<n; i++){
            if(password[i] == password[i-1]){
                return false;
            }    
        }
        return true;
}
};

// class Solution {
// public:
// bool strongPasswordCheckerII(string password) {     
//         // checking if length is greater than 8 or not
//         if(password.size()<8) return false;

//         // checking it contain upper , lower and digit characters or not
//         bool upper=false,lower=false,digit=false;
//         for(auto it : password){
//         if(it<='z' && it>='a'){
//             lower = true;
//         }else if(it<='Z' && it>='A'){
//             upper = true;
//         }else if(it<='9' && it>='0'){
//             digit = true;
//         }
//     }
//     if(!upper || !lower || !digit) return false;
    
//     // check for special case
//     string special="!@#$%^&*()-+";
//     bool specialFlag=false;
//     for(auto it : special){
//         int fnd = password.find(it);
//         if(fnd>=0){
//             specialFlag=true;
//             break;
//         }
//     }
//     if(!specialFlag) return false;
    
//     // check for same two characters adjcent or not
//     for(int i=0;i<password.size()-1;i++){
//         if(password[i]==password[i+1]) return false;
//     }
//     return true;
// }
// };


