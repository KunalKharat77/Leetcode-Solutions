// 0257_Binary_Tree_Paths.cpp

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
    vector<string> ans;
    string path;
    vector<string> findPath(TreeNode* root, string path){
        if(root == nullptr) return {};

        if(path.empty()){
            path += to_string(root->val);
        }
        else{
            path += "->" + to_string(root->val);
        }

        if(root->left == nullptr && root->right == nullptr) ans.push_back(path);

        vector<string> leftSide = findPath(root->left, path);
        
        vector<string> rightSide = findPath(root->right, path);

        return ans;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == nullptr) return {};

        return findPath(root, path);
    }
};