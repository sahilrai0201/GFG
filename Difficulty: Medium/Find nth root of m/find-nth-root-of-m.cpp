class Solution {
  public:
  
    long long power(long long base, int exp, int m){
        long long ans = 1;
        
        for(int i=0; i<exp; i++){
            ans *= base;
            
            if(ans > m) return ans;
        }
        
        return ans;
    }
    
    int nthRoot(int n, int m) {
        // Code here
        if(m == 0) return 0;
        
        int s = 1;
        int e = m;
        
        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long val = power(mid, n, m);
            
            if(val == m){
                return mid;
            }
            else if(val < m){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return -1;
    }
};

