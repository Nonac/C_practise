/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    int l=0,r=0;
    if(root==NULL) return 0;
    l=maxDepth(root->left)+1;
    r=maxDepth(root->right)+1;
    return l>r?l:r;
}