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
    vector<int> result;
    int prev = 0, flag = 0, maxx = 0;
    void inorder (TreeNode* root) {
        if (!root)
            return;

        inorder(root->left);

        if (prev == root->val)
            flag++;
        else
            flag = 1;

        if (flag == maxx)
            result.push_back(root->val);
        else if (flag > maxx) {
            maxx = max(flag, maxx);
            result = {root->val};
        }

        prev = root->val;

        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);

        return result;
    }
};
