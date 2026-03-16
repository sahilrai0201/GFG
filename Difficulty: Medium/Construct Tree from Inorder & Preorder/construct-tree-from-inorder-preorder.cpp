class Solution {
  public:
    int findPositon(vector<int> &inorder, int element, int n){
        for(int i=0; i<n; i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }
    
    Node* solve(vector<int> &inorder, vector<int> &preorder, int &index, int inorderStart, 
    int inorderEnd, int n){
        //base case
        if(index >= n || inorderStart > inorderEnd) return NULL;
        
        int element = preorder[index++];
        Node* root = new Node(element);
        int position = findPositon(inorder, element, n);
        
        //recursive calls
        root->left = solve(inorder, preorder, index, inorderStart, position-1, n);
        root->right = solve(inorder, preorder, index, position+1, inorderEnd, n);
        
        return root;
    }
    
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int preOrderIndex = 0;
        int n = preorder.size();
        Node* ans = solve(inorder, preorder, preOrderIndex, 0, n-1, n);
        return ans;
    }
};