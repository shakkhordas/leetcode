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
    vector<int> generate(TreeNode* joe) {
        vector<int> ans;
        if (joe == NULL)
            return ans;
        stack<TreeNode*> st;
        st.push(joe);
        while (!st.empty()) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if (temp->left) st.push(temp->left);
            if (temp->right) st.push(temp->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        return generate(root);
    }
};
