class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        unordered_set<int> st(arr.begin(), arr.end());
        
        int longest = 0;
        
        for(int num : st){
            if(st.find(num - 1) == st.end()){
                int curr = num;
                int count = 1;
                
                while(st.find(curr + 1) != st.end()){
                    curr++;
                    count++;
                }
                
                longest = max(longest, count);
            }
        }
        
        return longest;
    }
};




// class Solution {
//   public:
//     int longestConsecutive(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         int longest = 0;
        
//         for(int i=0; i<n; i++){
//             int x = arr[i];
//             int count = 1;
            
//             while(find(arr.begin(), arr.end(), x+1) != arr.end()){
//                 x++;
//                 count++;
//             }
            
//             longest = max(longest, count);
//         }
        
//         return longest;
//     }
// };