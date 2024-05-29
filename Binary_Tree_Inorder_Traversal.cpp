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
    void gen(TreeNode* r, vector<int>& v) {
        if (r!=NULL) {
            gen(r->left, v);
            v.push_back(r->val);
            gen(r->right, v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        gen(root, res);
        return res;
    }
};
