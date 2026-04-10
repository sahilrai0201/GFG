class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        
        int sum = 0, maxLen = 0;
        
        for(int i=0; i<arr.size(); i++){
            sum = sum + arr[i];
            
            // case 1: from index 0 to i
            if(sum == k){
                maxLen = i + 1;
            }
            
            // case 2: if (sum - k) seen before
            if(mp.find(sum - k) != mp.end()){
                maxLen = max(maxLen, i - mp[sum - k]);
            }
            
            //store only first occurrence
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        
        return maxLen;
    }
};