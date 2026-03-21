class Solution {
  public:
    void inorder(Node* root, vector<int> &in){
        if(root == NULL) return;
        
        //inorder -> LNR
        inorder(root->left, in);
        in.push_back(root->data);
        inorder(root->right, in);
    }
    
    vector<int> mergeArray(vector<int> &a, vector<int> &b){
        vector<int> ans(a.size() + b.size());
        
        int i=0, j=0;
        int k=0;
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                ans[k++] = a[i++];
            }
            else{
                ans[k++] = b[j++];
            }
        }
        
        while(i < a.size()){
            ans[k++] = a[i++];
        }
        
        while(j < b.size()){
            ans[k++] = b[j++];
        }
        
        return ans;
    }
    
    // Node* inorderToBST(int s, int e, vector<int> &in){
    //     if(s>e) return NULL;
        
    //     int mid = (s+e)/2;
        
    //     Node* root = new Node();
    //     root->data = in[mid];
    //     root->left = root->right = NULL;
        
    //     root->left = inorderToBST(s, mid-1, in);
    //     root->right = inorderToBST(mid+1, e, in);
        
    //     return root;
    // }
    
    vector<int> merge(Node *root1, Node *root2) {
        //step 1 -> store inorder
        vector<int> bst1, bst2;
        inorder(root1, bst1);
        inorder(root2, bst2);
        
        //step 2 -> merge 2 sorted arrays of inorders
        return mergeArray(bst1, bst2);
        
        //step 3 -> inorder to bst
        // int start = 0, end = mergedArray.size()-1;
        // return inorderToBST(start, end, mergedArray);
    }
};



