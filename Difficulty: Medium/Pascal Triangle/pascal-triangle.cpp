class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> ans;
        long long val = 1;
        
        for(int r=0; r<n; r++){
            ans.push_back(val);
            val = val * (n-r-1)/(r+1);
        }
        
        return ans;
    }
};
