class Solution {
  public:
    
    // Function to perform inorder traversal and store values in sorted order
    void inorder(Node* root, vector<int> &inorderVal){
        
        // Base case: if node is NULL, return
        if(root == NULL) return;
        
        // Step 1: Traverse left subtree (smaller elements)
        inorder(root->left, inorderVal);
        
        // Step 2: Store current node value
        inorderVal.push_back(root->data);
        
        // Step 3: Traverse right subtree (larger elements)
        inorder(root->right, inorderVal);
    }
    
    Node *flattenBST(Node *root) {
        
        // Step 1: Store BST elements in sorted order using inorder traversal
        vector<int> inorderVal;
        inorder(root, inorderVal);
        
        int n = inorderVal.size();
        
        // Step 2: Create new root using first (smallest) element
        Node* newRoot = new Node(inorderVal[0]);
        Node* curr = newRoot;
        
        // Step 3: Create a right-skewed tree (like a linked list)
        for(int i = 1; i < n; i++){
            
            // Create new node for each element
            Node* temp = new Node(inorderVal[i]);
            
            // Set left pointer to NULL (as per requirement)
            curr->left = NULL;
            
            // Link current node to next node
            curr->right = temp;
            
            // Move current pointer forward
            curr = temp;
        }
        
        // Step 4: Ensure last node points to NULL
        curr->left = NULL;
        curr->right = NULL;
        
        // Return new flattened BST (right-skewed)
        return newRoot;
    }
};