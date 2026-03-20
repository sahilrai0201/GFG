class Solution {
public:
    vector<Node*> findPreSuc(Node* root, int key) {
        
        Node* pred = NULL;
        Node* succ = NULL;
        Node* temp = root;

        // Step 1: Find the key node while updating pred & succ
        while(temp != NULL && temp->data != key){
            if(key < temp->data){
                succ = temp;
                temp = temp->left;
            } else {
                pred = temp;
                temp = temp->right;
            }
        }

        // If key not found
        if(temp == NULL) return {pred, succ};

        // Step 2: Find predecessor (max in left subtree)
        Node* leftTree = temp->left;
        while(leftTree != NULL){
            pred = leftTree;
            leftTree = leftTree->right;
        }

        // Step 3: Find successor (min in right subtree)
        Node* rightTree = temp->right;
        while(rightTree != NULL){
            succ = rightTree;
            rightTree = rightTree->left;
        }

        return {pred, succ};
    }
};