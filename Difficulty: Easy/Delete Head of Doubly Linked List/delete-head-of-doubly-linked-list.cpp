
Node *deleteHead(Node *head) {
    // Your code here
    
    if(head == NULL){
        return NULL;
    }
    
    Node* temp = head;
    
    if(head->next != NULL){
        head = head->next;
        
        head->prev = NULL;
        temp->next = NULL;
        
        delete temp;
    }
    else{
        delete head;
    }
    
    return head;
}
