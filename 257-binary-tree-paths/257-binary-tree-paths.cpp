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
class Solution {
public:
    void getPath(TreeNode* root, string str, vector<string> &ans){
        
        if(!root)
            return;
        if(root->left || root->right)
            str += (to_string(root->val)+"->");
        else{                              //means leaf node
            str += (to_string(root->val));
            ans.push_back(str);
        }
           
        getPath(root->left, str, ans);
        getPath(root->right, str, ans);    
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        //code starts from here
        vector<string> ans;
        string str="";
        getPath(root, str, ans);
        return ans;
    }
};