class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int, int> count;
        int duplicate, missing;
        
        for(int num :  arr){
            count[num]++;
        }
        
        for(int i=1; i<=n; i++){
            if(count[i] == 2){
                duplicate = i;
            }
            else if(count[i] == 0){
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};