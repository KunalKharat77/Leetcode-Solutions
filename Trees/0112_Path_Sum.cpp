// 0112_Path_Sum.cpp

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
    int sum = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;

        sum += root->val;

        if (root->left == nullptr && root->right == nullptr)
            return sum == targetSum;

        bool leftSide = hasPathSum(root->left, targetSum);

        if (root->left != nullptr)
            sum -= root->left->val;

        bool rightSide = hasPathSum(root->right, targetSum);

        if (root->right != nullptr)
            sum -= root->right->val;

        return leftSide || rightSide;
    }
};