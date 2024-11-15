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
    void inorder(TreeNode* root, vector<int>& res) {
        if (!root) return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        int minn = 100001;

        for (int i=0; i<ans.size()-1; i++)
            minn = min(minn, abs(ans[i]-ans[i+1]));

        return minn;
    }
};
