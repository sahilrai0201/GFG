class Solution {
  public:

    // Checks whether it is possible to place k cows
    // such that the minimum distance between any two cows is at least 'dist'
    bool canPlace(vector<int> &stalls, int k, int dist) {
        
        int count = 1;              // Place first cow at the first stall
        int lastPos = stalls[0];    // Position of the last placed cow

        // Try placing the remaining cows
        for (int i = 1; i < stalls.size(); i++) {

            // If current stall is at least 'dist' away
            // from the last placed cow, place a cow here
            if (stalls[i] - lastPos >= dist) {
                count++;
                lastPos = stalls[i];

                // If all k cows have been placed
                if(count >= k) return true;
            }
        }

        // Not enough cows could be placed
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Sort stalls so that distances can be checked in order
        sort(stalls.begin(), stalls.end());

        // Minimum possible answer
        int low = 1;

        // Maximum possible answer
        int high = stalls.back() - stalls.front();

        int ans = 0;

        // Binary Search on Answer
        while (low <= high) {

            int mid = low + (high - low) / 2;

            // If we can place cows with minimum distance = mid
            if (canPlace(stalls, k, mid)) {

                ans = mid;      // Store current valid answer

                // Try for a larger minimum distance
                low = mid + 1;
            }
            else {

                // Distance too large, try smaller distances
                high = mid - 1;
            }
        }

        // Maximum possible minimum distance
        return ans;
    }
};