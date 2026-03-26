class Solution {
  public:
    void addSolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n){
        vector<int> temp;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == 1){
                    temp.push_back(j+1);
                }
            }
        }
        ans.push_back(temp);
    }
    
    bool isSafe(int row, int col, vector<vector<int>> &board, int n){
        int x = row;
        int y = col;
        
        //check for row
        while(y >= 0){
            if(board[x][y] == 1){
                return false;
            }
            y--;
        }
        
        //left upward diagonal
        x = row;
        y = col;
        //check for diagonal
        while(x >= 0 && y >= 0){
            if(board[x][y] == 1){
                return false;
            }
            y--;
            x--;
        }
        
        //right upward diagonal
        x = row;
        y = col;
        //check for diagonal
        while(x < n && y >= 0){
            if(board[x][y] == 1){
                return false;
            }
            y--;
            x++;
        }
        
        return true;
    }
    
    void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){
        //base case
        if(col == n){
            addSolution(ans, board, n);
            return;
        }
        
        //solve 1 case and rest recursion will do
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                //if placing queen is safe
                board[row][col] = 1;
                solve(col+1, ans, board, n);
                
                //backtarck
                board[row][col] = 0;
            }
        }
    }
  
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<int>> ans;
        
        solve(0, ans, board, n);
        return ans;
    }
};

