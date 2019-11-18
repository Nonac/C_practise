/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSymmetric(struct TreeNode* root){
    if(root==NULL)
    {
        return true;
    }
    return recursion(root->left,root->right);
}

int recursion(struct TreeNode* l, struct TreeNode* r)
{
    if(l==NULL&&r==NULL) return true;
    if(l==NULL||r==NULL||l->val!=r->val) return false;
    return recursion(l->left,r->right)&&\
        recursion(l->right,r->left)&&\
        (l->val==r->val);
}