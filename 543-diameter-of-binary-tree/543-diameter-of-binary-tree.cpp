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

 
//tc O(N), sc- O(N) 
class Solution {
private:
    int height(TreeNode* node, int &maxi){   //diameter pass by reference
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left, maxi);
        int rh=height(node->right, maxi);
        maxi = max(maxi, lh+rh);
        return 1 + max(lh,rh);
    }
    
public:    
    int diameterOfBinaryTree(TreeNode* root) {
      int diameter=0; //diameter - maxi
        height(root, diameter);
        return diameter;
    }
};