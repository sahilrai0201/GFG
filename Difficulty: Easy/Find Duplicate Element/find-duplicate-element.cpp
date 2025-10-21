class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        // check first 5 elements
        if(arr[0] == arr[4]) return arr[0];  
        // else the duplicate is in last 5 elements
        return arr[5];                        
    }
};
