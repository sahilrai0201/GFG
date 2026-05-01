class Solution {
  public:
  
    int merge(vector<int> &arr, int left, int mid, int right){
        int count = 0;
        int j = mid+1;
        
        //count reverse pairs
        for(int i=left; i<=mid; i++){
            while(j <= right && arr[i] > 2 * arr[j]){
                j++;
            }
            count += (j - (mid + 1));
        }
        
        //merge step
        vector<int> temp;
        int i = left, k = mid+1;
        
        while(i <= mid && k <= right){
            if(arr[i] <= arr[k]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[k++]);
            }
        }
        
        while(i <= mid) temp.push_back(arr[i++]);
        while(k <= right) temp.push_back(arr[k++]);
        
        //copy back to original array
        for(int p=left; p<=right; p++){
            arr[p] = temp[p - left];
        }
        
        return count;
    }
    
    int mergeSort(vector<int> &arr, int left, int right){
        if(left >= right) return 0;
        
        int mid = (left + right) / 2;
        int count = 0;
        
        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid+1, right);
        count += merge(arr, left, mid, right);
        
        return count;
    }
    
    int countRevPairs(vector<int> &arr) {
        // Code here
        return mergeSort(arr, 0, arr.size()-1);
    }
};


