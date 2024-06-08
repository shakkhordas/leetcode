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
    void dfs (TreeNode* node, string current, vector<string>& ans) {
        current += "->" + to_string(node->val);

        if (node->left == NULL and node->right == NULL) {
            ans.push_back(current);
            return;
        }

        if (node->left) dfs(node->left, current, ans);
        if (node->right) dfs(node->right, current, ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string curr = "";
        if (root == NULL) return res;
        curr += to_string(root->val);
        if (root->left == NULL and root->right == NULL) {
            res.push_back(curr);
            return res;
        }
        if (root->left) dfs(root->left, curr, res);
        if (root->right) dfs(root->right, curr, res);

        return res;
    }
};
