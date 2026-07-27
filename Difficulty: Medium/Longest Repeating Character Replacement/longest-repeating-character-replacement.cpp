class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        int n = s.length();
        
        vector<int> freq(26, 0);
        
        int i = 0;
        int maxFreq = 0;
        int maxLen = 0;
        
        for(int j = 0; j < n; j++){
            freq[s[j] - 'A']++;
            
            maxFreq = max(maxFreq, freq[s[j] - 'A']);
            
            while((j - i + 1) - maxFreq > k){
                freq[s[i] - 'A']--;
                i++;
            }
            
            maxLen = max(maxLen, j - i + 1);
        }
        
        return maxLen;
    }
};