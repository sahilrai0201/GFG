class Solution {
  private:
    string convert2binary(int n){
        if(n == 0) return "0";
        
        string res = "";
        
        while(n > 0){
            if(n % 2 == 0) res += '0';
            else res += '1';
            
            n = n / 2;
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
    
  public:
    int setBits(int n) {
        // Code here
        string binary = convert2binary(n);
        int x = binary.length();
        
        int count = 0;
        
        for(int i=0; i<x; i++){
            if(binary[i] == '1') count++;
        }
        
        return count;
    }
};