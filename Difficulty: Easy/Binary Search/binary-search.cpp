class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int ans = -1;
        
        int start = 0;
        int end = n-1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == k){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] > k){
                end = mid - 1;
            }
            else{   //(arr[mid] < k)
                start = mid + 1;
            }
        }
        return ans;
    }
};