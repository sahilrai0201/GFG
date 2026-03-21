class Solution {
  public:
    Node* solve(int pre[], int mini, int maxi, int &i, int size){
        if(i >= size) return NULL;
        
        if(pre[i] < mini || pre[i] > maxi) return NULL;
        
        Node* root = new Node();
        root->data = pre[i++];
        root->left = root->right = NULL;
        
        root->left = solve(pre, mini, root->data, i, size);
        root->right = solve(pre, root->data, maxi, i, size);
         
        return root;
    }
    
    Node* Bst(int pre[], int size) {
        int i = 0;
        return solve(pre, INT_MIN, INT_MAX, i, size);
    }
};