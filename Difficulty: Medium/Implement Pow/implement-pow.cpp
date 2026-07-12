class Solution {
  private:
    double solve(double b, long e){
        if(e == 0){
            return 1;
        }
        
        if(e < 0){
            return solve(1/b, -e);
        }
        
        if(e % 2 == 0){
            return solve(b * b, e / 2);
        }
        
        return b * solve(b * b, (e-1) / 2);
    }
    
  public:
    double power(double b, int e) {
        // code here
        return solve(b, (long)e);
    }
};