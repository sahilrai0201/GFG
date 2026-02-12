class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        queue<int> newq;
        
        for(int i=0; i<n/2; i++){
            int element = q.front();
            q.pop();
            newq.push(element);
        }
        while(!newq.empty()){
            q.push(newq.front());
            newq.pop();
            
            q.push(q.front());
            q.pop();
        }
    }
};