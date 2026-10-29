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
void inorder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL)
        return;

    inorder(root->left, arr, k);
    arr[(*k)++] = root->val;
    inorder(root->right, arr, k);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = malloc(100 * sizeof(int));
    *returnSize = 0;

    inorder(root, arr, returnSize);

    return arr;
}