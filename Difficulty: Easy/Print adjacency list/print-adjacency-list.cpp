class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        
        // Step 1: create adjacency list
        vector<vector<int>> adj(V);
        
        // Step 2: fill adjacency list
        for(int i=0; i<edges.size(); i++){
            int u = edges[i].first;
            int v = edges[i].second;
            
            adj[u].push_back(v);
            adj[v].push_back(u);    // because undirected
        }
        
        return adj;
    }
};