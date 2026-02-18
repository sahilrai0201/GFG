class Solution {
  public:
    int largest(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        return arr[arr.size()-1];
    }
};
