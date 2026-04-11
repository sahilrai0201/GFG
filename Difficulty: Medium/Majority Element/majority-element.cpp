class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int, int> mp;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto j : mp){
            if(j.second > n/2){
                return j.first;
            }
        }
        
        return -1;
    }
};





//TEST CASES NOT GETTING PASSED-------------->
// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
//         // code here
//         int candidate = arr[0];
//         int vote = 1;
        
//         for(int i=1; i<arr.size(); i++){
//             if(vote == 0){
//                 candidate = arr[i];
//                 vote = 1;
//             }
//             else if(arr[i] == candidate){
//                 vote++;
//             }
//             else{
//                 vote--;
//             }
//         }
//         return candidate;
//     }
// };