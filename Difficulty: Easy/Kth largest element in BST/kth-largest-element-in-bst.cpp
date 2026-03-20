// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    int solve(Node* root, int &k){
        //base case
        if(root == NULL) return -1;
        
        //traverse right (larger element first)
        int right = solve(root->right, k);
        if(right != -1) return right;
        
        //node
        k--;
        if(k == 0) return root->data;
        
        //left
        return solve(root->left, k);
    }
    
    int kthLargest(Node *root, int k) {
        return solve(root, k);
    }
};