class Solution {
  public:
    int setBit(int n) {
        // n | (n+1) flips the rightmost 0 bit to 1
        // (if n is all 1s, e.g. 0111, this correctly extends to 1111)
        return n | (n + 1);
    }
};