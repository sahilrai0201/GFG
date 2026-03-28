class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();    //vertices
        
        vector<bool> visited(V, false);
        queue<int> q;
        vector<int> bfs;
        
        //start from node 0
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            bfs.push_back(node);
            
            for(auto neighbour : adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return bfs;
    }
};