class Solution {
private:
    Node* flyodDetectLoop(Node* head){
        //empty list
        if(head == NULL)
           return NULL;
    
        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;

            if(slow == fast){
                //loop detected
                // cout << "cycle present at node : " << slow->data << endl;
                return slow;
            }
        }
        return NULL;    //No cycle detected
    }
    
    //function to get starting node
    Node* getstartingNode(Node* head){
        if(head == NULL) return NULL;

        Node* intersection = flyodDetectLoop(head);
        if(intersection == NULL) return NULL;  //no loop
        
        Node* slow = head;
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
    
public:
    void removeLoop(Node* head) {
        if(head == NULL) return;

        Node* startOfLoop = getstartingNode(head);
        if(startOfLoop == NULL) return;
        
        Node* temp = startOfLoop;
        while(temp->next != startOfLoop){
            temp = temp->next;
        }
        temp->next = NULL;
    }
};