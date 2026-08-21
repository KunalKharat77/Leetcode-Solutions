// 0199_Binary_Tree_Right_Side_View.cpp

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->right != nullptr)
                    q.push(node->right);
                if (node->left != nullptr)
                    q.push(node->left);
                level.push_back(node->val);
            }
            ans.push_back(level[0]);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) { return levelOrder(root); }
};