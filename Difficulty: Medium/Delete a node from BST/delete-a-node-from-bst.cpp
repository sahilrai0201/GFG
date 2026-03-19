class Solution {
  public:
    Node* minVal(Node* root){
        Node* temp = root;
        while(temp->left != NULL){
            temp = temp->left;
        }
        return temp;
    }
    
    Node* delNode(Node* root, int x) {
        // base case
        if(root == NULL) return root;

        if(root->data == x){
            // 0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            // 1 child (left)
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // 1 child (right)
            if(root->left == NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }

            // 2 child
            if(root->left != NULL && root->right != NULL){
                int mini = minVal(root->right)->data;
                root->data = mini;
                root->right = delNode(root->right, mini);
                return root;
            }
        }
        else if(root->data > x){
            root->left = delNode(root->left, x);
            return root;
        }
        else{
            root->right = delNode(root->right, x);
            return root;
        }
    }
};