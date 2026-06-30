// Optimised Approach : TC = O(N+M) & SC = O(1) 
class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        
        int n = arr.size();        // Number of rows
        int m = arr[0].size();     // Number of columns

        // Start from the top-right corner
        int i = 0;
        int j = m - 1;

        int ans = -1;              // Stores the index of the row with maximum 1s

        // Traverse until we go out of bounds
        while (i < n && j >= 0) {

            if (arr[i][j] == 1) {
                // Found a 1, so this row has more 1s than all previously checked rows.
                // Update the answer and move left to check for more 1s in the same row.
                ans = i;
                j--;
            }
            else {
                // Current element is 0, so this row cannot have more 1s
                // than the current best. Move to the next row.
                i++;
            }
        }

        // Returns -1 if no 1 is found; otherwise returns the first row
        // having the maximum number of 1s.
        return ans;
    }
};




// Brute Force : TC = O(N*M) & SC = O(1) : 
// class Solution {
//   public:
//     int rowWithMax1s(vector<vector<int>> &arr) {
//         // code here
        
//         int n = arr.size();
//         int m = arr[0].size();
        
//         int maxOnes = 0;
//         int index = -1;
        
//         for(int i=0; i<n; i++){
            
//             int countRow = 0;
            
//             for(int j=0; j<m; j++){
//                 countRow += arr[i][j];
//             }
            
//             if(countRow > maxOnes){
//                 maxOnes = countRow;
//                 index = i;
//             }
//         }
        
//         return index;
//     }
// };