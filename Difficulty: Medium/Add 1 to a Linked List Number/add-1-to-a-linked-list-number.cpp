class Solution {
  private:
    Node* reverseList(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
  public:
    Node* addOne(Node* head) {
        // code here
        head = reverseList(head);
        
        Node* curr = head;
        int carry = 1;
        
        while(curr != NULL && carry){
            int sum = curr->data + carry;
            curr->data = sum % 10;
            carry = sum / 10;
            
            if(curr->next == NULL && carry){
                curr->next = new Node(0);
            }
            
            curr = curr->next;
        }
        
        head = reverseList(head);
        
        return head;
    }
};