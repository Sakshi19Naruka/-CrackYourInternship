//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<int> wt(N);
      for(int i=0; i<N; i++){
          if(Edge[i]!=-1){
              wt[Edge[i]] += i;
          }
      }
      
      int max_wt=-1, max_wt_idx=-1;
      for(int i=0; i<N; i++){
          if(wt[i]>=max_wt){
              max_wt = wt[i];
              max_wt_idx = i;
          }
      }
      return max_wt_idx;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends