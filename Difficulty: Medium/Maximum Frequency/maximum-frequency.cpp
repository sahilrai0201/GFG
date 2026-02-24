class Solution {
  public:
    int maxFrequency(int arr[], int n, int k) {
        sort(arr, arr + n);
        
        int left = 0;
        int maxFreq = 0;
        long long sum = 0;
        
        for(int right = 0; right < n; right++){
            sum = sum + arr[right];
            
            //check if operation needed exceeds k
            while(arr[right] * (right - left + 1) - sum > k){
                sum = sum - arr[left];
                left++;
            }
            
            maxFreq = max(maxFreq, right - left + 1);
        }
        return maxFreq;
    }
};