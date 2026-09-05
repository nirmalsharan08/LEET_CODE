/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* n, vector<int>& a) {
        if(n==nullptr) return;
        a.push_back(n->val);
        preorder(n->left,a);
        preorder(n->right,a);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        preorder(root,a);
        return a;

    }
};