
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        stack<int> st;
        
        Node* temp = head;
        
        while(temp != NULL){
            st.push(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp != NULL){
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
        
        return head;
    }
};