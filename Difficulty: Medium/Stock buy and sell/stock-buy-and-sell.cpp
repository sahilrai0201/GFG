//MULTIPLE TRANSACTION------------------------->
class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int profit = 0;
        
        for(int i=1; i<arr.size(); i++){
            // if price increases, take the profit
            if(arr[i] > arr[i-1]){
                profit = profit + (arr[i] - arr[i-1]);
            }
        }
        
        return profit;
    }
};





//SINGLE TRANSACTION----------------->
// class Solution {
//   public:
//     int stockBuySell(vector<int> &arr) {
//         // code here
//         int minPrice = INT_MAX;
//         int profit = 0;
        
//         for(int i=0; i<arr.size(); i++){
//             minPrice = min(arr[i], minPrice);
//             profit = max(profit, arr[i]-minPrice);
//         }
        
//         return profit;
//     }
// };