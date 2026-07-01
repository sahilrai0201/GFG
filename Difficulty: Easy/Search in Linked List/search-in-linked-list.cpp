/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        
        while(head != NULL){
            if(head->data == key){
                return true;
            }
            else{
                head = head->next;
            }
        }
        
        return false;
    }
};
