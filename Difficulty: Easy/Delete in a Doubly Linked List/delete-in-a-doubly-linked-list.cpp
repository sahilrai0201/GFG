class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        if(head == NULL){
            return NULL;
        }
        
        if(x == 1){
            Node* temp = head;
            head = head->next;
            
            if(head != NULL){
                head->prev = NULL;
            }    
            
            delete temp;
            return head;
        }
        
        Node* curr = head;
            
        for(int i=1; i<x; i++){
            curr = curr->next;
        }
        
        Node* prev = curr->prev;
        Node* front = curr->next;
        
        prev->next = front;
            
        if(front != NULL){
            front->prev = prev;
        }
            
        delete curr;
        
        return head;
    }
};