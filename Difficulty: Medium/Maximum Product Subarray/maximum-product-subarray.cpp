class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int left = 1;
        int right = 1;
        
        int ans = INT_MIN;
        
        for(int i=0; i<n; i++){
            if(left == 0) left = 1;
            if(right == 0) right = 1;
            
            left = left * arr[i];
            right = right * arr[n-i-1];
            
            ans = max(ans, max(left, right));
        }
        
        return ans;
    }
};


//TC = O(N) & SC = O(1) ------------------------------>