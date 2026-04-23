class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        vector<vector<int>> result;
        
        int start = arr[0][0];
        int end = arr[0][1];
        
        for(int i=0; i<n; i++){
            if(end >= arr[i][0]){
                end = max(end, arr[i][1]);
            }
            else{
                result.push_back({start, end});
                
                start = arr[i][0];
                end = arr[i][1];
            }
        }
        
        result.push_back({start, end});
        
        return result;
    }
};