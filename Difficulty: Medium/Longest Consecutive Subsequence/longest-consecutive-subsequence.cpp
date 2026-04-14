class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.size() == 0) return 0;
        sort(arr.begin(), arr.end());
        
        int count = 1;
        int maxCount = 1;
        
        int n = arr.size();
        
        int i = 0;
        while(i < n-1){
            if(arr[i] == arr[i+1]){
                i++;
                continue;
            }
            else if(arr[i] + 1 == arr[i+1]){
                count++;
            }
            else{
                maxCount = max(maxCount, count);
                count = 1;
            }
            i++;
        }
        return max(maxCount, count);
    }
};