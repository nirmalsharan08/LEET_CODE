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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<pair<TreeNode*,TreeNode*>> nodes;
        nodes.push({p,q});
        while(!nodes.empty()){
            auto [nodeP,nodeQ]=nodes.front();
            nodes.pop();
            if(!nodeP && !nodeQ) continue;
            if(!nodeP || !nodeQ) return false;
            if(nodeP->val != nodeQ->val) return false;
            nodes.push({nodeP->left,nodeQ->left});
            nodes.push({nodeP->right,nodeQ->right});
        }
        return true;
    }
};