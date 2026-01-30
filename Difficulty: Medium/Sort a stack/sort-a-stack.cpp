class Solution {
  private:
   void sortedInsert(stack<int> &st, int number){
       //base case
       if(st.empty() || !st.empty() && st.top() < number){
           st.push(number);
           return;
       }
       
       int n = st.top();
       st.pop();
       
       //recursive call
       sortedInsert(st, number);
       
       st.push(n);
   }
   
  public:
    void sortStack(stack<int> &st) {
        //base case
        if(st.empty()){
            return;
        }
        
        int num = st.top();
        st.pop();
        
        //recursive call
        sortStack(st);
        
        sortedInsert(st, num);
    }
};
