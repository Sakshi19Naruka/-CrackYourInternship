// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
         int sum=0;
       int n=N;
       for(int i=0;i<n;i++){
           sum=sum+arr[i];
       }
       int a=0;
       if(sum%2!=0){return false;
       }
       else{
           a=sum/2;
       }
       bool dp[n+1][a+1];
       dp[0][0]=true;
     
       for(int i=1;i<=n;i++){
           for(int j=0;j<=a;j++){
               if(j>=arr[i-1]){
                   dp[i][j]= dp[i-1][j] || dp[i-1][j-arr[i-1]];
               }
               else{
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[n][a];
   }
        // code here
        // int sum=0;
        // // int n=N;
        // for(int i=0; i<N; i++){
        //     sum += arr[i];
        // }
        // int Sum=0;
        // if(sum%2 != 0)  return false;  //if sum is odd means any partition of equal sum is not possible
        // else{     // if sum is even means ek aisa partition chahiye jiska addition sum/2 aaye
        //     Sum = sum/2;
        // }
        // bool t[N+1][Sum+1];
        // for(int i=0; i<=N; i++){
        //     for(int j=0; j<=Sum; j++){
        //         if(i==0)
        //           t[i][j]=false;
        //         if(j==0)
        //           t[i][j]=true;
        //         if(arr[i-1]<=j){
        //             t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
        //         } 
        //         else{
        //             t[i][j] = t[i-1][j];
        //         }
        //     }
        // }
        // return t[N][Sum];
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends