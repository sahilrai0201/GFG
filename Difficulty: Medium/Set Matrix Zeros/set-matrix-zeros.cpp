class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<pair<int, int>> zeroes;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    zeroes.push_back({i, j});
                }
            }
        }
        
        for(auto it : zeroes){
            int row = it.first;
            int col = it.second;
            
            for(int j=0; j<m; j++){
                mat[row][j] = 0;
            }
            
            for(int i=0; i<n; i++){
                mat[i][col] = 0;
            }
        }
    }
};