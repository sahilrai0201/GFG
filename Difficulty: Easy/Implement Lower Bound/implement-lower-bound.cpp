class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        int ans = n;
        
        for(int i=0; i<n; i++){
            if(arr[i] >= target){
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};
