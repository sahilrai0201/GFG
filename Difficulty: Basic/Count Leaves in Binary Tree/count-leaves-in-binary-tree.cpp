class Solution {
  public:
  
    void inOrder(Node* root, int &count){
        //base case
        if(root == NULL){
            return;
        }
        
        inOrder(root->left, count);
        
        //leaf node
        if(root->left == NULL && root->right == NULL){
            count++;
        }
        
        inOrder(root->right, count);
    }
  
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        int count = 0;
        
        inOrder(root, count);
        
        return count;
    }
};