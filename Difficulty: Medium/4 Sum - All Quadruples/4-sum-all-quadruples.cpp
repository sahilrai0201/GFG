class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long long a = arr[i];
                long long b = arr[j];
                long long t = (long long)target - a - b;
                int s = j+1, e = n-1;
                
                while(s<e){
                    long long sum = (long long)arr[s] + arr[e];
                    
                    if(sum == t){
                        ans.push_back({arr[i], arr[j], arr[s], arr[e]});
                        while(s<e && arr[s] == arr[s+1]) s++;
                        while(s<e && arr[e] == arr[e-1]) e--;
                        s++;
                        e--;
                    }
                    else if(sum > t){
                        e--;
                    }
                    else{
                        s++;
                    }
                }
                while(i<n && arr[i+1] == arr[i]) i++;
                while(j<n && arr[j+1] == arr[j]) j++;
            }
        }
        return ans;
    }
};

