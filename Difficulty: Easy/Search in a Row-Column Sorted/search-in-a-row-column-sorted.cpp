class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int row = mat.size();
        int col = mat[0].size();
        
        int rowIndex = 0;
        int colIndex = col - 1;
        
        while(rowIndex < row && colIndex >= 0){
            int element = mat[rowIndex][colIndex];
            
            if(element == x){
                return true;
            }
            else if(element < x){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        
        return false;
    }
};