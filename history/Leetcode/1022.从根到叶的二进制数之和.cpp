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
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        helper(root, sum, 0);
        return sum;
    }

    void helper(TreeNode* root, int& sum, int parentVal) {
        if (root == NULL) {
            return;
        }
        parentVal = (parentVal<<1) | root->val;
        if (root->left == NULL && root->right == NULL) {
            sum += parentVal;
        }
        helper(root->left, sum, parentVal);
        helper(root->right, sum, parentVal);
    }
};
