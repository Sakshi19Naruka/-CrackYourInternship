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
    TreeNode* BST(vector<int>& nums, int low, int high){
        if(low>high)  return NULL;   //do not forget this condition
        else{
        int mid = (int)(low+high)/2;
        TreeNode* root = new TreeNode(nums[mid]); //make new node
        root->left = BST(nums, low, mid-1);
        root->right = BST(nums, mid+1, high);
            
            return root;
        }       
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //code starts from here    
        return BST(nums, 0, nums.size()-1);
    }
};