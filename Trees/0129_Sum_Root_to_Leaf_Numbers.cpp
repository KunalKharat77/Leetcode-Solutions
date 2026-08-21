// 0129_Sum_Root_to_Leaf_Numbers.cpp

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
    int ans;
    int sum = 0;
    void sumofPath(TreeNode* root, int sum){
        if(root == nullptr) return;

        sum = (sum*10) + root->val;

        if(root->left == nullptr && root->right == nullptr){
            ans += sum;
            return;
        }

        sumofPath(root->left, sum);
        sumofPath(root->right, sum);
        
    }
    int sumNumbers(TreeNode* root) {
        sumofPath(root, sum);

        return ans;
    }
};