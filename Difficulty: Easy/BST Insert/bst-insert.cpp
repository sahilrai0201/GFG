/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* root, int key) {
        //base case
        if(root == NULL){
            root = new Node(key);
            return root;
        }
        
        if(key > root->data){
            root->right = insert(root->right, key);
        }
        else{
            root->left = insert(root->left, key);
        }
        return root;
    }
};