//APPROACH-2 : BETTER - O(n)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        
        int largest = -1;
        int secondLargest = -1;
        
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > secondLargest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};




//APPROACH-1 : BRUTE FORCE - O(nlogn + n)
// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         sort(arr.begin(), arr.end());
//         int n = arr.size();
        
//         int largest = arr[n-1];
        
//         for(int i=n-2; i >= 0; i--){
//             if(arr[i] != largest){
//                 return arr[i];
//             }
//         }
//         return -1;
//     }
// };

