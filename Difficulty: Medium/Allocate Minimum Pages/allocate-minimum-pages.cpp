class Solution {
  public:
  
    bool isPossible(vector<int> &arr, int k, int barrier){
        int n = arr.size();
        
        int studentCount = 1;
        int pageSum = 0;
        
        for(int i=0; i<n; i++){
            if(pageSum + arr[i] <= barrier){
                pageSum = pageSum + arr[i];
            }
            
            else{
                studentCount++;
                
                if(studentCount > k || arr[i] > barrier){
                    return false;
                }
                
                pageSum = arr[i];
            }
        }
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        if(k > n) return -1;
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(isPossible(arr, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};