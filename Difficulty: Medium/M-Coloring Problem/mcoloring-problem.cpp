class Solution {
  private:
    bool isSafe(int node, int clr, vector<vector<int>> &adj, vector<int> &color){
        for(int neighbour : adj[node]){
            if(color[neighbour] == clr){
                return false;
            }
        }
        
        return true;
    }
  
    bool solve(int node, int v, int m, vector<vector<int>> &adj, vector<int> &color){
        if(node == v){
            return true;
        }
        
        for(int clr = 1; clr <= m; clr++){
            if(isSafe(node, clr, adj, color)){
                color[node] = clr;
                
                if(solve(node + 1, v, m, adj, color)){
                    return true;
                }
                
                color[node] = 0;
            }
        }
        
        return false;
    }
    
  public:
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>> adj(v);
        
        for(auto &edge : edges){
            int u = edge[0];
            int w = edge[1];
            
            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        
        vector<int> color(v, 0);
        
        return solve(0, v, m, adj, color);
    }
};