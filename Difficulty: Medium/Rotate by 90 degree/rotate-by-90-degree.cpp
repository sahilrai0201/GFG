class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        //transpose of the matrix
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        //reverse the transposed matrix manually
        //COLUMN WISE REVERSAL FOR ANTI-CLOCKWISE ROTATION----->
        for(int j=0; j<n; j++){
            int top = 0, bottom = n-1;
            while(top < bottom){
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
        
    }
};

//TC = O(N*N) & SC = O(1)--------------------->