class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL) return NULL;
        
        if(head->next == NULL){
            delete head;
            return NULL;
        }
        
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = NULL;
        delete curr;
        
        return head;
    }
};