class Solution {
  public:
    void inorder(Node* root, vector<int> &inorderVal){
        if(root == NULL) return;
        
        //inorder -> LNR
        inorder(root->left, inorderVal);
        inorderVal.push_back(root->data);
        inorder(root->right, inorderVal);
    }
    
    bool findTarget(Node *root, int target) {
        vector<int> inorderVal;
        inorder(root, inorderVal);
        int i=0, j=inorderVal.size()-1;
        
        while(i<j){
            int sum = inorderVal[i] + inorderVal[j];
            if(sum == target) return true;
            else if(sum > target) j--;
            else i++;
        }
        return false;
    }
};