class Solution {
  public:
  
    Node* floydCycle(Node* head){
        if(head == NULL){
            return NULL;
        }
        
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
    
    Node* startPoint(Node* head){
        if(head == NULL){
            return NULL;
        }
        
        Node* intersection = floydCycle(head);
        
        if(intersection == NULL) return NULL;
        
        Node* slow = head;
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        
        return slow;
    }
    
    int lengthOfLoop(Node *head) {
        // code here
        Node* start = startPoint(head);
        
        if(start == NULL) return 0;
        
        int count = 1;
        Node* temp = start->next;
        
        while(temp != start){
            count++;
            temp = temp->next;
        }
        
        return count;
    }
};


