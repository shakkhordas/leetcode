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
    void inorder(TreeNode* root, int& sum) {
        if (!root)
            return;

        inorder(root->left, sum);
        sum = sum + root->val;
        inorder(root->right, sum);
    }

    int solve(TreeNode* root) {
        if (!root)
            return 0;

        if (root->left == NULL and root->right == NULL) {
            int x = root->val;
            root->val = 0;
            return x;
        }

        int left = solve(root->left);
        int right = solve(root->right);

        int curr = root->val;
        root->val = abs(left-right);

        return curr + left + right;

    }

    int findTilt(TreeNode* root) {
        int sum = 0;
        solve(root);
        inorder(root, sum);

        return sum;
    }
};
