class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        return (n & (1 << k)) != 0;
    }
};




// class Solution {
//   private:
//     string convert2binary(int n){
//         if(n == 0) return "0";
        
//         string res = "";
        
//         while(n > 1){
//             if(n % 2 == 1) res += '1';
//             else res += '0';
            
//             n = n / 2;
//         }
        
//         res += '1';
        
//         reverse(res.begin(), res.end());
//         return res;
//     }
    
//   public:
//     bool checkKthBit(int n, int k) {
//         //  code here
//         string binary = convert2binary(n);
        
//         int index = binary.size() - 1 - k;
        
//         if(index < 0){
//             return false;
//         }
        
//         return binary[index] == '1';
//     }
// };







// class Solution {
//   public:
//     bool checkKthBit(int n, int k) {
//         //  code here
//         string binary = bitset<32>(n).to_string();
        
//         return binary[31 - k] == '1';
//     }
// };



