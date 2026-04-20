class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        unordered_map<int, int> mp;
        
        int sum = 0;
        int maxi = 0;
        
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            
            if(sum == 0){
                maxi = i+1;
            }
            
            if(mp.find(sum) != mp.end()){
                maxi = max(maxi, i-mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        
        return maxi;
    }
};