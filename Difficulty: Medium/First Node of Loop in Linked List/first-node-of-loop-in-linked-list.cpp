class Solution {
private :
    Node* floydCycle(Node* head){
        if(head == NULL) return NULL;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return slow;
            }
        }
        
        return NULL;
    }
    
public:
    int cycleStart(Node* head) {
        // code here
        if(head == NULL) return NULL;
        
        Node* intersection = floydCycle(head);
        
        if(intersection == NULL) return -1;
        
        Node* slow = head;
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        
        return slow->data;
    }
};

