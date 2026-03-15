//APPROACH 2 : TC = O(n) & SC = O(h) but in wc O(n) ->
class Solution {
  public:
    Node* solve(Node* root, int &k, int node){
        //base case
        if(root == NULL) return NULL;
        
        if(root->data == node) return root;
        
        Node* leftAns = solve(root->left, k, node);
        Node* rightAns = solve(root->right, k, node);
        
        if(leftAns != NULL && rightAns == NULL){
            k--;
            if(k <= 0){
                k = INT_MAX;
                return root;
            }
            return leftAns;
        }
        
        if(leftAns == NULL && rightAns != NULL){
            k--;
            if(k <= 0){
                k = INT_MAX;
                return root;
            }
            return rightAns;
        }
        return NULL;
    }
    
    int kthAncestor(Node *root, int k, int node) {
        Node* ans = solve(root, k, node);
        if(ans == NULL || ans->data == node){
            return -1;
        }
        else{
            return ans->data;
        }
    }
};






//APPROACH 1 : TC = O(n) & SC = O(n) ->
// class Solution {
//   public:
//     bool findPath(Node* root, int node, vector<int> &path){
//         if(root == NULL) return false;
        
//         path.push_back(root->data);    //add current node
        
//         if(root->data == node) return true;     //node found
        
//         //search left or right
//         if(findPath(root->left, node, path) || findPath(root->right, node, path))
//             return true;
            
//         path.pop_back();    //backtrack
//         return false;
//     }
    
//     int kthAncestor(Node *root, int k, int node) {
//         vector<int> path;
        
//         //check if node exists in a tree
//         if(!findPath(root, node, path)) return -1;
        
//         if(path.size() <= k) return -1;
        
//         return path[path.size() - k - 1];
//     }
// };
