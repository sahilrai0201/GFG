class Solution {
  public:
    void reverseParts(vector<int>& arr, int start, int end){
        while(start < end){
            swap(arr[start++], arr[end--]);
        }
    }
    
    void rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        
        //base case
        if(n == 0 || n == 1) return;
        
        k = k % n;
        if(k == 0) return;
        
        reverseParts(arr, 0, n-1);
        reverseParts(arr, 0, k-1);
        reverseParts(arr, k, n-1);
    }
};
