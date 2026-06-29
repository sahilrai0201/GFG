class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        
        int start = 0;
        int end = row * col - 1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            int element = mat[mid / col][mid % col];
            
            if(element == x){
                return 1;
            }
            else if(element < x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return 0;
    }
};