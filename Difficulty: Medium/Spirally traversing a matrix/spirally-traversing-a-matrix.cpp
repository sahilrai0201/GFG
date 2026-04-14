class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        vector<int> result;
        if(mat.empty()) return result;
        
        int top = 0;
        int bottom = mat.size() - 1;
        int left = 0;
        int right = mat[0].size() - 1;
        
        while(top <= bottom && left <= right){
            //traverse from left to right
            for(int i=left; i<=right; ++i){
                result.push_back(mat[top][i]);
            }
            ++top;
            
            //top to bottom
            for(int i=top; i<=bottom; ++i){
                result.push_back(mat[i][right]);
            }
            --right;
            
            //right to left
            if(top <= bottom){
                for(int i=right; i>=left; --i){
                    result.push_back(mat[bottom][i]);
                }
                --bottom;
            }
            
            //bottom to top
            if(left <= right){
                for(int i=bottom; i>=top; --i){
                    result.push_back(mat[i][left]);
                }
                ++left;
            }
        }
        return result;
    }
};

//TC = O(n×m) & SC = O(n×m)-------------------------->
