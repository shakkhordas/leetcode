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
    vector<int> ans;

    void solve_it(TreeNode* joe) {
        stack<TreeNode*> st;
        if (joe!=NULL)
            st.push(joe);
        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            if (curr->right!=NULL) st.push(curr->right);
            if (curr->left!=NULL) st.push(curr->left);
        }
    }

    void generate(TreeNode* joe) {
        if (joe!=NULL) {
            ans.push_back(joe->val);
            generate(joe->left);
            generate(joe->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        solve_it(root);
        return ans;
    }
};
