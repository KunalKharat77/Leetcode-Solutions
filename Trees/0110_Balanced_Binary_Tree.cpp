// 0110_Balanced_Binary_Tree.cpp

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
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftSide = height(root->left);
        if (leftSide == -1)
            return -1;
        int rightSide = height(root->right);
        if (rightSide == -1)
            return -1;

    if (abs(leftSide - rightSide) > 1)
            return -1;

        return 1 + max(leftSide, rightSide);
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;

        int ans = height(root);

        if (ans == -1)
            return false;

        return true;
    }
};