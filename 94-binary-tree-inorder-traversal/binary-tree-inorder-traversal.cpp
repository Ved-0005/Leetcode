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
    void morrisTrav(TreeNode* curr,vector<int>& ans){
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode* pre=curr->left;
                while(pre->right!=NULL&&pre->right!=curr){
                    pre=pre->right;
                }
                if(pre->right==NULL){
                    pre->right=curr;
                    curr=curr->left;
                }
                else{
                    pre->right=NULL;
                    ans.push_back(curr
                    ->val);
                    curr=curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* curr) {
        vector<int>ans;
        morrisTrav(curr,ans);
        return ans;
    }
};