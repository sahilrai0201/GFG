class Solution {
  public:
    int isStrong(int N) {
        
        //precompute factorial of digit 0-9
        int fact[10];
        fact[0] = 1;
        for(int i=1; i<=9; i++){
            fact[i] = fact[i-1] * i;
        }
        
        //compute the digits of n
        vector<int> freqN(10, 0);
        int temp = N;
        while(temp > 0){
            freqN[temp % 10]++;
            temp /= 10;
        }
        
        //compute the sum of factorials
        long long sumFact = 0;
        temp = N;
        while(temp > 0){
            sumFact += fact[temp % 10];
            temp /= 10;
        }
        
        //count digits of sumFact
        vector<int> freqSum(10, 0);
        temp = sumFact;
        if(temp == 0) freqSum[0]++;
        while(temp > 0){
            freqSum[temp % 10]++;
            temp /= 10;
        }
        
        //compare digit frequencies
        return freqN == freqSum;
    }
};