// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.

//**********************************
// Time comp - N^m (N node , and we are trying m colors on each of them)
// Space comp - O(N) + O(N) (color array + auxilliary space)
bool isPossible(int node, int color[], bool graph[101][101], int n, int col){ // col - color that is i am trying to do on that node
    for(int k=0; k<n; k++){
        if(k!=node && graph[k][node] == 1 && color[k] == col){  // graph[k][node] == 1 means adjacent node to kth node 
            return false;
        }
    }
    return true;
}

bool solve(int node, int color[], int m, int N, bool graph[101][101]){
    if(node==N)   //base case 
       return true;
    
    for(int i=1; i<=m; i++){
        if(isPossible(node, color, graph, N, i)){
            color[node] = i;
            if(solve(node+1, color, m, N, graph))  return true;
            color[node] = 0; //remove that color/backtracking when not possible 
        }
    } 
    //after trying every color on a particular node if for loop se bahr means not possible
    return false;
}


bool graphColoring(bool graph[101][101], int m, int N) { //m - no. of color, N - no. of nodes
    // your code here
    int color[N] = {0}; //assigned all nodes with no colour
    if(solve(0, color, m, N, graph)) return true;
    return false;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends