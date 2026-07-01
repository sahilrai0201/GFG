/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        
        if(head == NULL){
            return NULL;
        }
        
        if(x == 1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        
        for(int i=1; i<x; i++){
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = curr->next;
        
        delete curr;
        
        return head;
    }
};


