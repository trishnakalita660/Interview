// Expected Time Complexity: O(V)
// Expected Space Complexity: O(V)
class Solution {
public:
    bool bipartite(int color[],vector<vector<int>> graph,int node){
        if(color[node]==-1) color[node]=1;
        
        for(auto x: graph[node]){
            if(color[x]==-1){
                color[x] = 1-color[node];
                if(!bipartite(color, graph,x )) return false;
            }
            else if(color[x]== color[node]) return false;
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int color[graph.size()];
        int n = graph.size();
        memset(color, -1, sizeof(color));
        for(int i=0;i<n;i++){
            if(color[i]==-1){
            if(!bipartite(color, graph,i)) return false;
        }}
        return true;
    }
};