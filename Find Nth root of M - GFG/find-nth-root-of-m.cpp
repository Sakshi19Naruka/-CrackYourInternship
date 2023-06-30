//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    if(m==1)
	        return m;
	    int low = 1, high = m;
	    int ans = 1;
	    int mid;
	    while(low<=high){
	        mid = low + (high-low)/2;
	        if(pow(mid,n)>m){
	            high = mid-1;
	        }
	        else if(pow(mid,n)<m){
	            ans = max(ans, mid);
	            low = mid+1;
	        }
	        else{
	            return mid;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends