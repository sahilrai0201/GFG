//OPTIMISED VERSION--------------------------------->
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            if(st.empty()) {
                result[i] = -1;
            } else {
                result[i] = st.top();
            }

            st.push(arr[i]);
        }
        return result;
    }
};




//TC = O(N*N) & SC = O(N)--------------------------------->
// class Solution {
//   public:
//     vector<int> nextLargerElement(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         vector<int> result;
        
//         for(int i=0; i<n; i++){
//             int nextGreater = -1;
            
//             for(int j=i+1; j<n; j++){
//                 if(arr[j] > arr[i]){
//                     nextGreater = arr[j];
//                     break;
//                 }
//             }
//             result.push_back(nextGreater);
//         }
//         return result;
//     }
// };