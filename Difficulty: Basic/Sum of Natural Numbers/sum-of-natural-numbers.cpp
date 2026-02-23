class Solution {
  public:
    int findSum(int n) {
        //base case
        if(n == 0){
            return 0;
        }
        
        int sum = 0;
        for(int i=1; i<=n; i++){
            sum = sum + i;
        }
        return sum;
    }
};
