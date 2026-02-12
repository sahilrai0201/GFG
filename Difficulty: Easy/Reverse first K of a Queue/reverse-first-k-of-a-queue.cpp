class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        
        if(k <= 0 || k > q.size())
            return q;
            
        stack<int> st;
        
        for(int i=0; i<k; i++){
            int element = q.front();
            q.pop();
            st.push(element);
        }
        
        while(!st.empty()){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        
        int t = q.size() - k;
        
        while(t--){
            int element = q.front();
            q.pop();
            q.push(element);
        }
        
        return q;
    }
};