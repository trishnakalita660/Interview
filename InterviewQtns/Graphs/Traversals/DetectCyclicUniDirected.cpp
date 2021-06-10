// Time Complexity: O(V + E)
//   Space Complexity: O(V)
// 

bool cycle(int i,int V, vector<int> visit, vector<int>adj[]){
       queue<pair<int,int>>q;
	    q.push({i,-1});
	    visit[i]=1;
	    while(!q.empty()){
	        int node = q.front().first;
	        int parent = q.front().second;
	         q.pop();
	        for(auto x: adj[node]){
	          if(!visit[x]){
	              visit[x]=1;
	              q.push({x,node});
	          } else if(parent !=x){
	              return true;
	          } 
	        }}
	    return false;
	 
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    queue<pair<int,int>> q;
	    vector<int> visit(V+1,0);
	    for(int i=0;i<V;i++){
	        if(!visit[i]){
	          if(cycle(i,V,visit,adj)){
	              return true;
	          }
	        }}
	        return false;
	    }