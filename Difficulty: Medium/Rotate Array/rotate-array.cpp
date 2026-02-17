class Solution {
  public:
  
    void reversePart(vector<int>& arr, int start, int end){
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
  
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        
        if(n == 0 || n == 1) return;
        
        d = d % n;
        if(d == 0) return;
        
        reversePart(arr, 0, d-1);
        reversePart(arr, d, n-1);
        reversePart(arr, 0, n-1);
    }
};





// class Solution {
//   public:
//     void rotateArr(vector<int>& arr, int d) {
//         int n = arr.size();
        
//         //base case
//         if(n == 0 || n == 1) return;
        
//         d = d % n;
//         if(d == 0) return;
        
//         int first = arr[0];
        
//         for(int i=0; i<n-1; i++){
//             arr[i] = arr[i+1];
//         }
        
//         arr[n-1] = first;
        
//         //recursive call
//         rotateArr(arr, d-1);
//     }
// };

