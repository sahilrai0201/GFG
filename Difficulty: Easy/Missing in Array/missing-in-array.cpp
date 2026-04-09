class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int ans = 0;
        int n = arr.size();
        
        //XOR all elements from 1 to n
        for(int i=1; i<=n+1; i++){
            ans = ans ^ i;
        }
        
        //XOR all elements of array
        for(int x : arr){
            ans = ans ^ x;
        }
        
        return ans;
    }
};