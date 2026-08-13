// 0098_Validate_BST.cpp

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
    long long low = LLONG_MIN;
    long long high = LLONG_MAX;
    bool checkRange(TreeNode* root, long long low, long long high) {
        if (root == nullptr)
            return true;

        if (low >= root->val || root->val >= high)
            return false;

        bool leftSide = checkRange(root->left, low, root->val);
        bool rightSide = checkRange(root->right, root->val, high);

        return leftSide && rightSide;
    }
    bool isValidBST(TreeNode* root) {
        return checkRange(root, low, high);
    }
};