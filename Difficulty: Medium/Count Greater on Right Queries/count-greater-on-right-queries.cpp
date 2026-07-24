class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        // code here
        vector<int> ans;
        
        for(int idx : indices){
            int cnt = 0;
            
            for(int i = idx + 1;  i < arr.size(); i++){
                if(arr[i] > arr[idx]){
                    cnt++;
                }
            }
            
            ans.push_back(cnt);
        }
        
        return ans;
    }
};