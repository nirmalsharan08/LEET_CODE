1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    TreeNode* minValueNode(TreeNode* n) {
16        TreeNode* current = n;
17        while (current && current->left != nullptr) {
18            current = current->left;
19        }
20        return current;
21    }
22    TreeNode* deleteNode(TreeNode* root, int key) {
23        if (root == nullptr) {
24            return root;
25        }
26        if (key < root->val) {
27            root->left = deleteNode(root->left, key);
28        } else if (key > root->val) {
29            root->right = deleteNode(root->right, key);
30        } else {
31            if (root->left == nullptr) {
32                TreeNode* temp = root->right;
33                delete root;
34                return temp;
35            } else if (root->right == nullptr) {
36                TreeNode* temp = root->left;
37                delete root;
38                return temp;
39            }
40            TreeNode* temp = minValueNode(root->right);
41            root->val = temp->val;
42            root->right = deleteNode(root->right, temp->val);
43        }
44        return root;
45    }
46};