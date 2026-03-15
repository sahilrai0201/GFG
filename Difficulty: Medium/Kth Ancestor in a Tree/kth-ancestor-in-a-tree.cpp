class Solution {
  public:
    bool findPath(Node* root, int node, vector<int> &path){
        if(root == NULL) return false;
        
        //add current node
        path.push_back(root->data);
        
        //node found
        if(root->data == node) return true;
        
        //search left or right
        if(findPath(root->left, node, path) || findPath(root->right, node, path)){
            return true;
        }
        
        //backtrack
        path.pop_back();
        return false;
    }
    
    int kthAncestor(Node *root, int k, int node) {
        vector<int> path;
        
        //check if node exists in a tree
        if(!findPath(root, node, path)) return -1;
        
        if(path.size() <= k) return -1;
        
        return path[path.size() - k - 1];
    }
};
