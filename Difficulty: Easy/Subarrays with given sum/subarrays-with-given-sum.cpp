class Solution {
public:
    int subArraySum(vector<int>& arr, int k) {

        // Hash map to store:
        // {prefixSum -> number of times this prefixSum has occurred}
        unordered_map<int, int> mp;

        // Running sum of elements from index 0 to current index
        int prefixSum = 0;

        // Stores the total number of subarrays whose sum equals k
        int count = 0;

        // A prefix sum of 0 has occurred once before processing any element.
        // This is important for handling subarrays that start from index 0.
        //
        // Example:
        // arr = [1, 2, 3], k = 3
        // At index 1, prefixSum = 3
        // prefixSum - k = 0
        // Since mp[0] = 1, we count the subarray [1, 2].
        mp[0] = 1;

        // Traverse the array
        for (int num : arr) {

            // Add current element to the running prefix sum
            prefixSum += num;

            // We want:
            // prefixSum - previousPrefixSum = k
            //
            // Rearranging:
            // previousPrefixSum = prefixSum - k
            //
            // If (prefixSum - k) has occurred before,
            // then each occurrence represents a valid subarray
            // ending at the current index whose sum is k.
            if (mp.find(prefixSum - k) != mp.end()) {

                // Add the frequency because multiple previous
                // prefix sums may have the same value.
                count += mp[prefixSum - k];
            }

            // Store/update the frequency of the current prefix sum
            // for future indices.
            mp[prefixSum]++;
        }

        // Return total count of subarrays having sum k
        return count;
    }
};


//TC = O(N) & SC = O(N) ------------------------------------------->

