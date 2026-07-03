
class Solution {
public:    
    Node *insertInTail(Node *head, int data) {
        // code here
        
        Node* temp = new Node(data);
        
        if(head == NULL){
            return temp;
        }
        
        Node* tail = head;
        
        while(tail->next != NULL){
            tail = tail->next;
        }
        
        tail->next = temp;
        temp->prev = tail;
        
        tail = temp;
        
        return head;
    }
};