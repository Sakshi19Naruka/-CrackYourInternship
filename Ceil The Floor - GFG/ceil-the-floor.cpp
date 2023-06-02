//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int floorFind(int arr[], int n, int x){
    int low=0, high=n-1;
    int ans = -1;
    while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]<=x){
                ans= mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return (ans>=0 && ans<n) ? arr[ans] : -1; 
}

int ceilFind(int arr[], int n, int x){
    int low=0, high=n-1;
    int ans = n;
    while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>=x){
                ans= mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return (ans>=0 && ans<n) ? arr[ans] : -1; 
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    //Ceil is nothing but the lower bound
    pair<int, int> ans;
    sort(arr, arr+n);
    ans.first = floorFind(arr, n, x);
    ans.second = ceilFind(arr, n, x);
    return ans;
}