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
struct TreeNode** generate(int start, int end, int* size) {
    if (start > end) {
        struct TreeNode** trees = malloc(sizeof(struct TreeNode*));
        trees[0] = NULL;
        *size = 1;
        return trees;
    }

    struct TreeNode** ans = malloc(10000 * sizeof(struct TreeNode*));
    *size = 0;

    for (int i = start; i <= end; i++) {
        int leftSize, rightSize;

        struct TreeNode** left = generate(start, i - 1, &leftSize);
        struct TreeNode** right = generate(i + 1, end, &rightSize);

        for (int l = 0; l < leftSize; l++) {
            for (int r = 0; r < rightSize; r++) {
                struct TreeNode* root = malloc(sizeof(struct TreeNode));
                root->val = i;
                root->left = left[l];
                root->right = right[r];
                ans[(*size)++] = root;
            }
        }

        free(left);
        free(right);
    }

    return ans;
}

struct TreeNode** generateTrees(int n, int* returnSize) {
    if (n == 0) {
        *returnSize = 0;
        return NULL;
    }

    return generate(1, n, returnSize);
}