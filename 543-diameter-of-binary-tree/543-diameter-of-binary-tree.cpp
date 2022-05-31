/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//bruteforce 
//tc O(N^2) = O(N)->traverse everynode ,O(N) height
class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)    return 0;
        
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        
        return 1 + max(leftheight,rightheight);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
       if(root == NULL)    return 0;
        
        int h = height(root->left) + height(root->right);
        
        int leftdiameter = diameterOfBinaryTree(root->left);
        int rightdiameter = diameterOfBinaryTree(root->right);
        
        return max(h, max(leftdiameter ,rightdiameter)); 
    }
};