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


// TC - O(N) , SC - O(N)
class Solution {
    int leftLeafSum=0;
private:
    void helperFunc(TreeNode* root){
        if(root==NULL)  return;
        if(isLeafNode(root->left))  leftLeafSum += root->left->val;
        helperFunc(root->left);
        helperFunc(root->right);
    }
    
    bool isLeafNode(TreeNode* root){
        if(root==NULL)  return false;
        if(root->left==NULL && root->right==NULL)
            return true;
        
        return false;
    }
    
public:
    int sumOfLeftLeaves(TreeNode* root) {
        helperFunc(root);
        return leftLeafSum;  
    }
};