class Solution {
  public:
    
    int firstOcc(vector<int>& arr, int target){
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        int ans = -1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    int lastOcc(vector<int>& arr, int target){
        int n = arr.size();
        
        int start = 0, end = n-1;
        
        int ans = -1;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = firstOcc(arr, target);
        
        if(first == -1){
            return 0;
        }
        
        int last = lastOcc(arr, target);
        
        return last - first + 1;
    }
};



