// 0113_Path_Sum_II.cpp

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
    vector<vector<int>> ans;
    
    void findPath(TreeNode* root, int targetSum, vector<int> arr) {
        if (root == nullptr)
            return;

        arr.push_back(root->val);
        targetSum -= root->val;

        if (root->left == nullptr && root->right == nullptr && targetSum == 0) {
            ans.push_back(arr);
            return;
        }

        findPath(root->left, targetSum, arr);
        findPath(root->right, targetSum, arr);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        findPath(root, targetSum, {});

        return ans;
    }
};