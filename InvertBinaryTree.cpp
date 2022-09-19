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
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return nullptr;
        
        TreeNode* tempRight = root->right;
        //Perform a sawp
        root->right = root->left;
        root->left = tempRight;
        //use recursion
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        
        return root;
        
    }
};