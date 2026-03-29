class Solution {
  public:
    void dfsHelper(int node, vector<vector<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans){
        ans.push_back(node);
        visited[node] = true;
        
        for(auto i : adj[node]){
            if(!visited[i]){
                dfsHelper(i, adj, visited, ans);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        
        vector<int> ans;
        unordered_map<int, bool> visited;
        
        dfsHelper(0, adj, visited, ans);
        
        return ans;
    }
};