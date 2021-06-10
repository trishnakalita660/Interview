
//  Used for larger values of n 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m; // m =number of  lines of edges
    cin>> n>>m;

    vector<int> adj[n+1]; // if if undirected, non-weighted graph
    vector<pair<int,int>> adj2[n+1];   // if undirected,weighted graph
    memset(adj,-1, sizeof(adj));
    memset(adj2,-1, sizeof(adj));

    for(int i=0;i<=m ;i++){
        int u,v;
        cin>> u >>v;
    //  undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u); // not applicabe for directed graph

    // for weighted graph, 
        int wt;
        cin>>wt; 
        adj2[u].push_back({v,wt});
        adj2[v].push_back({u,wt});



    }
    return 0;
}