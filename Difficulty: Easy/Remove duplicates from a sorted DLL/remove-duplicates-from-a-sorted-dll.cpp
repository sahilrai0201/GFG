class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        if(headRef == NULL) return headRef;
        
        Node* temp = headRef;
        
        while(temp->next != NULL){
            
            if(temp->data == temp->next->data){
                
                Node* duplicate = temp->next;
                temp->next = duplicate->next;
                
                if(duplicate->next != NULL){
                    duplicate->next->prev = temp;
                }
                
                delete duplicate;
            }
            else{
                temp = temp->next;
            }
        }
        
        return headRef;
    }
};