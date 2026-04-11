//APPROACH 2 : OPTIMISED APPROACH----------------->
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        
        for(int x : arr){
            if(x == 0) zeroCount++;
            else if(x == 1) oneCount++;
            else twoCount++;
        }
        
        int i = 0;
        
        while(zeroCount--) arr[i++] = 0;
        while(oneCount--) arr[i++] = 1;
        while(twoCount--) arr[i++] = 2;
    }
};



//APPROACH 1 : MAP----------------->
// class Solution {
//   public:
//     void sort012(vector<int>& arr) {
//         // code here
//         map<int, int> mp;
        
//         for(int i=0; i<arr.size(); i++){
//             mp[arr[i]]++;
//         }
        
//         int index = 0;
        
//         for(auto it : mp){
//             int value = it.first;
//             int freq = it.second;
            
//             for(int i=0; i<freq; i++){
//                 arr[index++] = value;
//             }
//         }
//     }
// };