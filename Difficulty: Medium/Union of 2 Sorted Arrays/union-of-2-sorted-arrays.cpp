class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        vector<int> result;
        
        int i = 0;
        int j = 0;
        
        while(i < n && j < m){
            if(a[i] <= b[j]){
                if(result.empty() || result.back() != a[i]){
                    result.push_back(a[i]);
                }
                i++;
            }
            else{
                if(result.empty() || result.back() != b[j]){
                    result.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i < n){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        
        while(j < m){
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        }
        
        return result;
    }
};


