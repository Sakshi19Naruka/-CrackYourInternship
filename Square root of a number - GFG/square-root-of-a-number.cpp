//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long low = 1;
        long long high = x;
        long long mid;
        long long ans = 1;
        
        while(low<=high){
            mid = low + (high-low)/2;
            if(mid*mid<=x){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return ans; //return high
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends