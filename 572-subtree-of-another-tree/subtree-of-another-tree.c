/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSame(struct TreeNode* left, struct TreeNode* right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;
    if(left -> val != right -> val) return false;
    return isSame(left -> left, right-> left) && isSame(left -> right, right -> right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL) return false;
    if (isSame(root, subRoot)) return true;
    return isSubtree(root -> left, subRoot) || isSubtree(root-> right, subRoot);
}