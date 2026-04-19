class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            int a = arr[i];
            int t = target - a;
            int s = i+1, e = n-1;
            
            while(s<e){
                if(arr[s] + arr[e] == t){
                    return true;
                }
                else if(arr[s] + arr[e] > t){
                    e--;
                }
                else{
                    s++;
                }
            }
            
            while(i+1<n && arr[i+1] == arr[i]){
                i++;
            }
        }
        return false;
    }
};
