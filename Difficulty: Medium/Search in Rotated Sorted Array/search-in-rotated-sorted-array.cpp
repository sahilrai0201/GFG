class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int n = arr.size();
        
        int s = 0;
        int e = n - 1;
        
        while(s <= e){
            int mid = s + (e - s) / 2;
            
            if(arr[mid] == key){
                return mid;
            }
            
            if(arr[mid] >= arr[s]){
                if(key >= arr[s] && key < arr[mid]){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            else{
                if(key > arr[mid] && key <= arr[e]){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        }
        
        return -1;
    }
};