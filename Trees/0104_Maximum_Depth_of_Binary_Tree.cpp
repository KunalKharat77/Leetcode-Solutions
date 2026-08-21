// 0104_Maximum_Depth_of_Binary_Tree.cpp

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
    int maxDepth(TreeNode* root) {

        // Base case:
        // If there is no node, its depth is 0.
        if (root == nullptr)
            return 0;

        // Find the depth of the left subtree.
        int leftDepth = maxDepth(root->left);

        // Find the depth of the right subtree.
        int rightDepth = maxDepth(root->right);

        // Current node contributes 1 to the depth.
        return 1 + max(leftDepth, rightDepth);
    }
};