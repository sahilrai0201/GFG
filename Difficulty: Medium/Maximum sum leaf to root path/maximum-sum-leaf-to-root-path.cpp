class Solution {
  public:
    int solve(Node* root){
        if(root == NULL) return INT_MIN;
        
        //leaf node
        if(root->left == NULL && root->right == NULL){
            return root->data;
        }
        
        int leftSum = solve(root->left);
        int rightSum = solve(root->right);
        
        return root->data + max(leftSum, rightSum);
    }
    
    int maxPathSum(Node* root) {
        return solve(root);
    }
};