//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        while(st.size()>=2){
            int A = st.top();
            st.pop();
            int B = st.top();
            st.pop();
            
            if(M[A][B]==1){   //A B ko janta h to A to celeb ho nhi skta
                st.push(B);
            }
            else if(M[B][A]==1){  //B A ko janta h to B to celeb ho nhi skta
                st.push(A);
            }
        }
        
        if(st.size()==0){
            return -1;
        }
        int candidate = st.top();
        
        //row checking
        bool rowCheck=false;
        int zeroCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[candidate][i]==0){
                zeroCount++;
            }
        }
        
        if(zeroCount==n){
            rowCheck = true;
        }
        
        //col checking
        bool colCheck=false;
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][candidate]==1){
                oneCount++;
            }
        }
        
        if(oneCount==n-1){
            colCheck = true;
        }
        
        return (rowCheck&&colCheck) ? candidate : -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends