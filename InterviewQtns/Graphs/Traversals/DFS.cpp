//  DFS is a recursive function
// // 
// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)
void dfs(int node, vector<int> &store, vector<int>& visit,  vector<int> adj[]){
	    store.push_back(node);
	    
	    visit[node] =1;
	    
	    for(auto x: adj[node]){
	         if(!visit[x]){
	        dfs(x,store,visit,adj);
	    }}
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    
	    vector<int> store;
	    vector<int> visit(V+1,0);
	   //  visit[0]=1;
	    // if number of components > 1
	     for(int i=0;i<V;i++){
	    if(!visit[i]){
	    dfs(i,store,visit,adj);
	     }}
	   //  dfs(0,store,visit,adj); if number of components =1
	    return store;
	    
	}