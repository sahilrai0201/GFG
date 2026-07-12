class Solution {
  private:
    const int MOD = 1e9 + 7;
    
    int power(long long b, long long n){
        if(n == 0){
            return 1;
        }
        
        long long half = power(b, n/2);
        
        if(n % 2 == 0){
            return (half * half) % MOD;
        }
        
        return (b * (half * half) % MOD) % MOD;
    }
    
  public:
    int countGoodNumbers(long long N) {
        // code here
        long long even = (N + 1) / 2;
        long long odd = N / 2;
        
        return (1LL * power(5, even) * power(4, odd)) % MOD;
    }
};
