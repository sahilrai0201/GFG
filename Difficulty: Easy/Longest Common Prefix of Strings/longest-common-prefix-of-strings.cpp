// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.empty()) return "";
        sort(arr.begin(), arr.end());
        
        string first = arr[0];
        string last = arr.back();
        
        string result = "";
        
        int i=0;
        while(i < first.size() && i < last.size()){
            if(first[i] == last[i]){
                result = result + first[i];
                i++;
            }
            else{
                break;
            }
        }
        return result;
    }
};