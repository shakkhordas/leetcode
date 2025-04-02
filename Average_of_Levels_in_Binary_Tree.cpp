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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        queue<TreeNode*> q;

        if (root == NULL) return ans;

        q.push(root);

        while (!q.empty()) {
            long long levelSum = 0;
            int levelSize = q.size();
            for (int i=0; i<levelSize; i++) {
                TreeNode* current = q.front();
                levelSum += current->val;
                q.pop();

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }
            ans.push_back((double)levelSum/levelSize);
        }

        return ans;

    }
};
