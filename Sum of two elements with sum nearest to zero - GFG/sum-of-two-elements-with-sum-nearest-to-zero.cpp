//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr, arr+n);
            int l=0, r=n-1;
            int min_sum = INT_MAX;
            while(l<r){
                int sum = arr[l] + arr[r];
                if(abs(min_sum) > abs(sum)){
                    min_sum = sum;
                }
                
                if(abs(min_sum) == abs(sum)){
                    min_sum = max(min_sum, sum);
                }
                
                if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
            return min_sum;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends