// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int temp = n;
        int count = 0;
        
        //step1 : count number of digits
        while(temp > 0){
            count++;
            temp /= 10;
        }
        
        temp = n;
        int sum = 0;
        
        //step2 : calculate sum of digit^count
        while(temp > 0){
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }
        
        //step3 : compare
        return sum == original;
    }
};