// Expected Time Complexity: O(V)
// Expected Space Complexity: O(V)

    bool check(int i, int color[] ,vector<int> adj[]){
        queue<int>q;
        q.push(i);
        color[i]=1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto x : adj[node]){
                if(color[x]==-1){
                    color[x] = 1-color[node];
                    q.push(x);
                }
                else if(color[x] == color[node]) {return false;}
            }
        }
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	    int color[V];
        memset(color, -1, sizeof color); 
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	        if(!check(i, color, adj)) return false;
	    }
	        
	    }
	    return true;
	} 
	