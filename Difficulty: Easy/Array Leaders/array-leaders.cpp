//APPROACH 2 : OPTIMISED : TC = O(N) & SC = O(N)------------------------------>
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> result;
        
        int maxRight = INT_MIN;
        
        for(int i=n-1; i>=0; i--){
            if(arr[i] >= maxRight){
                result.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};



//APPROACH 1 : TC = O(N*N) & SC = O(N)------------------------------>
// class Solution {
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         //code here
//         int n = arr.size();
//         vector<int> result;
        
//         for(int i=0; i<n; i++){
//             bool isLeader = true;
            
//             for(int j=i+1; j<n; j++){
//                 if(arr[j] > arr[i]){
//                     isLeader = false;
//                     break;
//                 }
//             }
//             if(isLeader){
//                 result.push_back(arr[i]);
//             }
//         }
//         return result;
//     }
// };
