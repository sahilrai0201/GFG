class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int, int> freq;
        
        //count frequency
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        
        vector<vector<int>> result;
        
        for(auto it : freq){
            result.push_back({it.first, it.second});
        }
        
        return result;
    }
};