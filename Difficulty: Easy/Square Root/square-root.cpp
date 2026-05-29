class Solution {
  public:
  
    long long int binarySearch(int n){
        int s = 0;
        int e = n;
        long long int ans = -1;
        
        while(s <= e){
            long long int mid = s + (e-s)/2;
            long long square = mid * mid;
            
            if(square == n){
                return mid;
            }
            else if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
    
    int floorSqrt(int n) {
        // code here
        return binarySearch(n);
    }
};