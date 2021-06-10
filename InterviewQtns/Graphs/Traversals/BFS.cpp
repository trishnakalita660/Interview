//  BFS is basically traversig the adjacent nodes first and then move to the next nodes
 

//Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)


	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> bfs;
	    vector<int> visit(V+1,0);
	   //  cout<< adj[0][0];
	   queue<int>q;
      visit[0] =1;
       q.push(0);
	   // for(int i=0;i<V;i++){
	   //     if(!visit[i]){
	   //         visit[i]=1;
	            
	   //         q.push(i);
	            
	            
	            while(!q.empty()){
	                int node = q.front();
	                q.pop();
	                
	                bfs.push_back(node);
	            
	                for(auto x: adj[node] ){
	                    if(!visit[x]){
	                        q.push(x);
	                        visit[x]=1;
	                    }
	                }
	            }
	   //     }
	   // }
	    return bfs;
	}


//   maximum number of times the while loop iterates is |V |, the number of vertices, and
// for each vertice, the inner for loop iterates for all edges outgoing from x. Hence, Total number of
// times the for loop executes is |E|. Hence, overall runtime is O( |V | + |E|).