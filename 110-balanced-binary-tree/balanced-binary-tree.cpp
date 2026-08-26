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
    int height(TreeNode* node){
        if(node==NULL) return 0;
        return (1+max(height(node->left),height(node->right)));
    }
    bool isBalanced(TreeNode* root) {
        int ls=0,rs=0;
        if(root==NULL) return 1;
        if(root->left) ls=height(root->left);
        if(root->right) rs=height(root->right);
        if(abs(ls-rs)>1) return false;
        else return (isBalanced(root->left) && isBalanced(root->right));
    }
};