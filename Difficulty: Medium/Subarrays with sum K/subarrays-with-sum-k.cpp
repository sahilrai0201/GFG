class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        int sum = 0, count = 0;
        
        for(int num : arr){
            sum = sum + num;
            count = count + mp[sum - k];
            mp[sum]++;
        }
        
        return count;
    }
};