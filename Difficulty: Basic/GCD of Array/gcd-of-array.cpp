class Solution {
  public:
  
    int findGCD(int a, int b){
        if(b == 0) return a;
        return findGCD(b, a % b);
    }
    
    int gcd(int n, vector<int> arr) {
        int result = arr[0];
        
        for(int i=1; i<n; i++){
            result = findGCD(result, arr[i]);
        }
        
        return result;
    }
};
