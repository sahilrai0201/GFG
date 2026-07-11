class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        Node* dummy = new Node(-1);
        dummy->next = head;
        
        if(head != NULL){
            head->prev = dummy;
        }
        
        Node* last = dummy;
        Node* curr = head;
        
        while(curr != NULL){
            if(curr->data == x){
                last->next = curr->next;
                Node* temp = curr;
                curr = curr->next;
                
                if(curr != NULL){
                    curr->prev = last;
                }
                delete temp;
            }
            else{
                last = curr;
                curr = curr->next;
            }
        }
        
        Node* ans = dummy->next;
        if(ans != NULL){
            ans->prev = NULL;
        }
        delete dummy;
        
        return ans;
    }
};