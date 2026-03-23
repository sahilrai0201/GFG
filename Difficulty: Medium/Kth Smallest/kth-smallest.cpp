class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        //priority queue
        // priority_queue<int, vector<int>, greater<int>> pq;   //min heap
        priority_queue<int> pq;       //max heap
        
        for(int num : arr){
            pq.push(num);
            
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};