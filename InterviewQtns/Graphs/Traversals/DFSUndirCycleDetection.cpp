 bool cycle(int i,int V, vector<int> visit, vector<int>adj[]){
	   visit[i]=1;
	   
	   for(auto x: adj[i]){
	       if(visit[x]==0){
	       if(cycle(x, i, visit, adj)) return true;
               }
            else if(x!=V) return true;
	   }
	   return false;
	 
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	     
	    vector<int> visit(V+1,0);
	    for(int i=0;i<V;i++){
	        if(!visit[i]){
	          if(cycle(i,V,visit,adj)){
	              return true;
	          }
	        }}
	        return false;
	    }