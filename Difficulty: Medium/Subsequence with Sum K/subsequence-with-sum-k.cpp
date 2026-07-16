class Solution {
private:
    vector<vector<int>> dp;

    bool solve(int index, vector<int>& arr, int sum, int k) {

        // Found target
        if (sum == k)
            return true;

        // Reached end
        if (index == arr.size())
            return false;

        // If all numbers are non-negative, no need to continue
        if (sum > k)
            return false;

        // Already computed
        if (dp[index][sum] != -1)
            return dp[index][sum];

        // Include
        bool include = solve(index + 1, arr, sum + arr[index], k);

        // Exclude
        bool exclude = solve(index + 1, arr, sum, k);

        return dp[index][sum] = include || exclude;
    }

public:
    bool checkSubsequenceSum(vector<int>& arr, int k) {

        int n = arr.size();

        dp.assign(n, vector<int>(k + 1, -1));

        return solve(0, arr, 0, k);
    }
};