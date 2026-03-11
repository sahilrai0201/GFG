class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        
        vector<int> result;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int num : arr){
            pq.push(num);
            
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            result.push_back(pq.top());
            pq.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};