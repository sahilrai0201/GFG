class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Get size of array
        int n = arr.size();
        
        // Initialize binary search pointers
        int start = 0, end = n-1;
        
        // Continue until start and end meet
        while(start < end){

            // Find middle index safely
            int mid = start + (end - start) / 2;
            
            // Minimum element lies in right half
            if(arr[mid] > arr[end]){
                start = mid + 1;
            }
            else{

                // Minimum lies at mid or in left half
                end = mid;
            }
        }
        
        // Index of minimum element = number of rotations
        return start;
    }
};