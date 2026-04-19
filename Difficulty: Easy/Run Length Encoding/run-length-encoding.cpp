class Solution {
  public:
    string encode(string s) {
        
        string ans = "";
        int i = 0;
        int n = s.length();
        
        while(i<n){
            int j = i + 1;
            
            while(j<n && s[i] == s[j]){
                j++;
            }
            
            ans.push_back(s[i]);
            ans += to_string(j-i);
            
            i = j;
        }
        
        return ans;
    }
};