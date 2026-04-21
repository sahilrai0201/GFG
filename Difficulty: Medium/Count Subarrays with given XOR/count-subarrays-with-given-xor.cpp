class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        unordered_map<int, int> mp;
        int xr = 0;
        long count = 0;
        
        mp[0] = 1;
        
        for(int i=0; i<n; i++){
            xr = xr ^ arr[i];
            
            int need = xr ^ k;
            
            if(mp.find(need) != mp.end()){
                count = count + mp[need];
            }
            
            mp[xr]++;
        }
        return count;
    }
};