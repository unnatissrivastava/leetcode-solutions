/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL)
        return;

    arr[(*k)++] = root->val;
    preorder(root->left, arr, k);
    preorder(root->right, arr, k);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = malloc(100 * sizeof(int));
    *returnSize = 0;

    preorder(root, arr, returnSize);

    return arr;
}