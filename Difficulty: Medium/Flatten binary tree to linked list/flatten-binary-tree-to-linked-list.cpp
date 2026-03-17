class Solution {
  public:
    void flatten(Node *root) {
        // Start from the root node
        Node* curr = root;

        // Traverse the tree
        while(curr != NULL){
            
            // If left subtree exists
            if(curr->left){
                
                // Find the rightmost node (predecessor) in left subtree
                Node* pred = curr->left;
                while(pred->right){
                    pred = pred->right;
                }    
                
                // Connect predecessor's right to current node's right subtree
                pred->right = curr->right;
                
                // Move left subtree to the right
                curr->right = curr->left;
                
                // Set left child to NULL (as per requirement)
                curr->left = NULL;
            }
            
            // Move to next node (always go right)
            curr = curr->right;
        }
    }
};