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
void postorder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL)
        return;

    postorder(root->left, arr, k);
    postorder(root->right, arr, k);
    arr[(*k)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = malloc(100 * sizeof(int));
    *returnSize = 0;

    postorder(root, arr, returnSize);

    return arr;
}