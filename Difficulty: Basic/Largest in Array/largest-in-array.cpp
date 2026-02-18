//APPROACH-2 : BETTER - O(n)
class Solution {
  public:
    int largest(vector<int> &arr) {
        int max = INT_MIN;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};




//APPROACH-1 : BRUTE FORCE - O(nlogn)
// class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         sort(arr.begin(), arr.end());
//         return arr[arr.size()-1];
//     }
// };
