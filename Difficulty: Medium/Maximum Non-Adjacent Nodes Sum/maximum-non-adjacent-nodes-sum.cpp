//TC = O(n) & SC = O(h)
class Solution {
  public:
    // This function returns a pair:
    // first  -> maximum sum INCLUDING the current node
    // second -> maximum sum EXCLUDING the current node
    pair<int, int> solve(Node* root){
        
        if(root == NULL){     // Base case: if node is NULL
            // If there is no node, both include and exclude sums are 0
            pair<int, int> p = make_pair(0, 0);
            return p;
        }
        pair<int, int> left = solve(root->left);  //Recursively solve for left subtree
        pair<int, int> right = solve(root->right); // Recursively solve for right subtree
        
        pair<int, int> result;
        
        // Case 1: Include current node
        // If we include root, we cannot include its children
        // So we take root->data + exclude sum of left + exclude sum of right
        result.first = root->data + left.second + right.second;
        
        // Case 2: Exclude current node
        // If we exclude root, we can either include or exclude children
        // So we take maximum of both choices for left and right
        result.second = max(left.first, left.second) + max(right.first, right.second);
        
        return result;
    }
    
    int getMaxSum(Node *root) {
        pair<int, int> ans = solve(root);  // Get both include and exclude sums for root
        
        // Maximum sum will be max of including or excluding root
        return max(ans.first, ans.second);
    } 
};


