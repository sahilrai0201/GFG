class Solution {
  private:
    void insertAtBottom(stack<int> &st, int x){
        //base case
        if(st.empty()){
            st.push(x);
            return;
        }
        
        int num = st.top();
        st.pop();
        
        //recursive call
        insertAtBottom(st, x);
        
        st.push(num);
    }
    
  public:
    void reverseStack(stack<int> &st) {
        // base case
        if(st.empty()){
            return;
        }
        
        int num = st.top();
        st.pop();
        
        //recursive call
        reverseStack(st);
        
        insertAtBottom(st, num);
    }
};