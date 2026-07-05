class Solution {
  public:
    Node* reverseList(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        
        // find mid
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // reverse the list
        slow->next = reverseList(slow->next);
        
        Node* firstHead = head;
        Node* secondHead = slow->next;
        
        // merge both halves
        while(secondHead != NULL){
            if(firstHead->data != secondHead->data) return false;
            
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
        
        return true;
    }
};

