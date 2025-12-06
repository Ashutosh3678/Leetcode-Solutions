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
    int maxi;
    int maxDepth(TreeNode* root) {
        height(root);
        return maxi;
    }
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int left=height(root->left);
        int right=height(root->right);
        maxi=max(left,right)+1;
        return maxi;
    }
};