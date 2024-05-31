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
    int height(TreeNode* joe) {
        if (joe == NULL)
            return 0;
        return max(height(joe->left), height(joe->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        int diff = abs(height(root->left)-height(root->right));
        return isBalanced(root->left) && isBalanced(root->right) && (diff<2);
    }
};
