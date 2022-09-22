// Bruteforce

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> index;
        int cnt = 1, c = 0;
        
        //sort arr
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i] == arr[i+1]){
                cnt++;
            }
            else{
                index.push_back(cnt);
                c++;
                cnt = 1;    // reinitialise cnt = 1
            }
        }
        //pushing last element
        index.push_back(cnt);
        
        //now sorting index vector then check for duplicates
        sort(index.begin(), index.end());
        
        for(int i=0; i<c; i++){
            if(index[i] == index[i+1]){
                return false;
            }
        }
         return true;
    }
};