class Solution {
    int cnt=0;
private:
    void func(int index, vector<int> &arr){
        if(index==arr.size()){
            cnt++; 
        }
        
        for(int i=index; i<arr.size();i++){
            swap(arr[index], arr[i]);
             if(arr[index] % (index+1)==0 || (index+1)%arr[index]==0)   //given condition
                func(index+1, arr);
            swap(arr[index], arr[i]);   //reswap (backtracking)
        }
    }
public:
    int countArrangement(int n) {
         // code starts from here
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            arr[i] = i+1;        // if n=3, [1,2,3]
        }
        func(0, arr);
        return cnt;
    }
};