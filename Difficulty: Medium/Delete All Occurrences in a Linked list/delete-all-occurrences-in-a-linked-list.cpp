class Solution {
  public:
    Node* deleteAllOccurances(Node* head, int x) {
        // code here
        Node* dummy = new Node(-1);
        dummy->next = head;
        
        Node* prev = dummy;
        Node* curr = head;
        
        while(curr != NULL){
            if(curr->data == x){
                prev->next = curr->next;
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        
        Node* ans = dummy->next;
        delete dummy;
        
        return ans;
    }
};
