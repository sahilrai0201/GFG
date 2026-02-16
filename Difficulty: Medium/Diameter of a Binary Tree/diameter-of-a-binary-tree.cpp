#include<bits/stdc++.h>

class Solution {
    
  private:
    int height(Node* root){
        //base case
        if(root == NULL){
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left, right) + 1;
    }
    
  public:
    int diameter(Node* root) {
        //base case
        if(root == NULL){
            return 0;
        }
        
        int op1 = diameter(root->left);    //max diameter is in left part
        int op2 = diameter(root->right);   //max diameter is in right part
        int op3 = height(root->left) + height(root->right);    //combination of both
        
        int ans = max(op1, max(op2, op3));
        
        return ans;
    }
};