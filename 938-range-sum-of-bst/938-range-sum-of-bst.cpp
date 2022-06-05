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

// in previous approach TC- O(n), SC - O(h) h = height [Considering recursive calls]
// we can actually optimize the space.
//The logic is almost same as we discussed in the previous approach .The main difference is that we use a stack for storing the data of nodes . So everytime we can just peek and pop the last values that we entered

class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode *node = s.top();
            s.pop();
            if(node->val >= low && node->val <= high)  sum+=node->val;
            if(node->val > low){
                if(node->left) 
                    s.push(node->left);
            }
            if(node->val < high){
                if(node->right) 
                    s.push(node->right);
            }
        }
        return sum;
    }
};