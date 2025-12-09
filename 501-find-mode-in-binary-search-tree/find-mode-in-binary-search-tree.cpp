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
    map<int,int>m;
    void dfs(TreeNode*root){
        if(root==nullptr) return;
        m[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        int maxi=0;
        for(auto it:m){
            maxi=max(maxi,it.second);
        }
        vector<int> ans;
        for (auto it : m){
            if (it.second == maxi)
            ans.push_back(it.first);
        }
        return ans;
    }
};