class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        if(arr.empty()) return {};
        int i = 0;
        
        for(int j=1; j<arr.size(); j++){
            if(arr[j] != arr[i]){
                i++;
                arr[i] = arr[j];
            }
        }
        arr.resize(i+1);
        return arr;
    }
};