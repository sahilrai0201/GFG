class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char> st;
        
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            
            //ch is opening bracket or any operator
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                st.push(ch);
            }
            else{
                //ch is closing bracket or any letter
                if(ch == ')'){
                    bool isRedundant = true;
                    
                    while(st.top() != '('){
                        char top = st.top();
                        if(top == '+' || top == '-' || top == '*' || top == '/'){
                            isRedundant = false;
                        }
                        st.pop();
                    }
                    
                    if(isRedundant == true) return true;
                    st.pop();
                }
            }
        }
        return false;
    }
};
