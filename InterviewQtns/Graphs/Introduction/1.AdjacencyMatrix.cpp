//  If the graph is 1 based indexing, then we declare a 2 matrix of size (n+1) * (n+1);
//  this matrix is used for smaller values of n. For larger values we use adjacency llist
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m; // m =number of  lines of edges
    cin>> n>>m;

    int adj[n+1][n+1];
     memset(adj,-1, sizeof(adj));
    for(int i=0;i<=m ;i++){
        int u,v;
        cin>> u >>v;
    //  undirected graph
        adj[u][v] =1;
        adj[v][u]=1; // not applicabe for directed graph


    }
    return 0;
}