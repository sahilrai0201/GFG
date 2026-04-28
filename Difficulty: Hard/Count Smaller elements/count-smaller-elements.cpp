// User function Template for C++
//  User function template for C++

class Solution {
  public:
  
    vector<int> ans;
    vector<int> index;
    
    void merge(vector<int> &arr, int left, int mid, int right){
        vector<int> temp;
        int i = left, j = mid+1;
        int rightCount = 0;
        
        while(i <= mid && j <= right){
            if(arr[index[j]] < arr[index[i]]){
                temp.push_back(index[j]);
                rightCount++;
                j++;
            }
            else{
                ans[index[i]] += rightCount;
                temp.push_back(index[i]);
                i++;
            }
        }
        
        while(i <= mid){
            ans[index[i]] += rightCount;
            temp.push_back(index[i]);
            i++;
        }
        
        while(j <= right){
            temp.push_back(index[j]);
            j++;
        }
        
        for(int k=left; k<=right; k++){
            index[k] = temp[k-left];
        }
    }
    
    void mergeSort(vector<int> &arr, int left, int right){
        if(left >= right) return;
        
        int mid = (left + right)/2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        
        merge(arr, left, mid, right);
    }
  
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        ans.assign(n, 0);
        index.resize(n);
        
        for(int i=0; i<n; i++){
            index[i] = i;
        }
        
        mergeSort(arr, 0, n-1);
        
        return ans;
    }
};