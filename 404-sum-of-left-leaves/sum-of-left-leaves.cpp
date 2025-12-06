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
    int sumOfLeftLeaves(TreeNode* root) {
        int c;
        c = sum(root);
        return c;
    }

    int sum(TreeNode* root){
        if(root == nullptr) return 0;
        int leftsum = 0;
        if (root->left && root->left->left == nullptr && root->left->right == nullptr)
            leftsum = root->left->val;

        int left = sum(root->left);
        int right = sum(root->right);

        return leftsum + left + right;
    }
};



