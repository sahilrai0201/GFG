class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(!head || !head->next || k == 0) return head;
        
        //Step 1 : Find length and last node
        Node* temp = head;
        int n = 1;
        
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        
        //step 2 : Reduce k
        k = k % n;
        if(k == 0) return head;   //no need for rotation
        
        //Step 3 : Make circular
        temp->next = head;
        
        //step 4 : find new tail (k-1 th steps from head)
        Node* newTail = head;
        
        for(int i=1; i<k; i++){
            newTail = newTail->next;
        }
        
        //Step 5 : Break the circle
        Node* newHead = newTail->next;
        newTail->next = NULL;
        
        return newHead;
    } 
};