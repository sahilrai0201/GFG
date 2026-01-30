class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int> temp;
        
        //move all elements to temp
        while(!st.empty()){
            int num = st.top();
            temp.push(num);
            st.pop();
        }
        
        //insdert at bottom
        st.push(x);
        
        //move back all elements
        while(!temp.empty()){
            int num = temp.top();
            st.push(num);
            temp.pop();
        }
        
        return st;
    }
};