class Solution {
public:
    int countStrings(int n) {

        if (n == 1)
            return 2;

        long long endWithZero = 1;
        long long endWithOne = 1;

        for (int i = 2; i <= n; i++) {
            long long newZero = endWithZero + endWithOne;
            long long newOne = endWithZero;

            endWithZero = newZero;
            endWithOne = newOne;
        }

        return endWithZero + endWithOne;
    }
};