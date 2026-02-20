class Solution {
  public:
    bool isPalindrome(int n) {
        // Negative numbers and numbers ending with 0 (but not 0) are not palindromes
        if(n < 0 || (n % 10 == 0 && n != 0)){
            return false;
        }
        
        int reversedHalf = 0;
        while(n > reversedHalf){
            reversedHalf = reversedHalf * 10 + n % 10;
            n = n / 10;
        }
        
        // If x is equal to reversedHalf (even length)
        // or x is equal to reversedHalf / 10 (odd length, middle digit ignored)
        return (n == reversedHalf || n == reversedHalf / 10);
    }
};