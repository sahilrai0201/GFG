
class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        
        if(head == NULL){
            return new Node(x);
        }
        
        Node* temp = head;
        
        for(int i=0; i<p; i++){
            temp = temp->next;
        }
            
        Node* nodeToAdd = new Node(x);
        
        nodeToAdd->next = temp->next;
        nodeToAdd->prev = temp;
        
        if(temp->next != NULL){
            temp->next->prev = nodeToAdd;
        }
            
        temp->next = nodeToAdd;
        
        return head;
    }
};