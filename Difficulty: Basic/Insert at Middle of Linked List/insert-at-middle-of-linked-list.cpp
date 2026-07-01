class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node* nodeToAdd = new Node(x);
        
        if(head == NULL) return nodeToAdd;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        nodeToAdd->next = slow->next;
        slow->next = nodeToAdd;
        
        return head;
    }
};





// class Solution {
//   public:
//     Node *insertInMiddle(Node *head, int x) {
//         // code Here
        
//         Node* nodeToAdd = new Node(x);
        
//         if(head == NULL) return nodeToAdd;
        
//         int len = 0;
        
//         Node* temp = head;
//         while(temp != NULL){
//             temp = temp->next;
//             len++;
//         }
        
//         int position = (len / 2);
        
//         temp = head;
//         for(int i=0; i<position; i++){
//             temp = temp->next;
//         }
        
//         nodeToAdd->next = temp->next;
//         temp->next = nodeToAdd;
        
//         return head;
//     }
// };