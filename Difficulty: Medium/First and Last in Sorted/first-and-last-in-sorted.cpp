class Solution {
  public:
  
    int firstOcc(vector<int>& arr, int x){
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        int ans = -1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] > x){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    int lastOcc(vector<int>& arr, int x){
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        int ans = -1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x){
                ans = mid;
                start = mid + 1;
            }
            else if(arr[mid] > x){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first = firstOcc(arr, x);
        int last = lastOcc(arr, x);
        
        return {first, last};
    }
};

