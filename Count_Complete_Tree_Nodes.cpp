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
    int res = 0;
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        if (root->val > -1) res = 1;

        res = res + countNodes(root->left);
        res = res + countNodes(root->right);

        return res;
    }
};
