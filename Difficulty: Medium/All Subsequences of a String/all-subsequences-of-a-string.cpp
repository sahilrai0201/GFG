class Solution {
  private:
    void solve(int index, string &s, string curr, vector<string> &ans){
        if(index == s.length()){
            ans.push_back(curr);
            return;
        }
        
        solve(index + 1, s, curr + s[index], ans);
        
        solve(index + 1, s, curr, ans);
    }
    
  public:
    vector<string> powerSet(string &s) {
        // Code here
        vector<string> ans;
        
        solve(0, s, "", ans);
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};