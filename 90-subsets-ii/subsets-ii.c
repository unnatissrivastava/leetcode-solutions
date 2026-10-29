/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsetsWithDup(int* nums, int numsSize, int* returnSize,
                     int** returnColumnSizes) {
    int capacity = 1 << numsSize;
    int** ans = malloc(capacity * sizeof(int*));
    *returnColumnSizes = malloc(capacity * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

    int total = 1 << numsSize;

    for (int mask = 0; mask < total; mask++) {
        int* subset = malloc(numsSize * sizeof(int));
        int size = 0, valid = 1;

        for (int i = 0; i < numsSize; i++) {
            if (mask & (1 << i)) {
                if (i > 0 && nums[i] == nums[i - 1] &&
                    !(mask & (1 << (i - 1)))) {
                    valid = 0;
                    break;
                }
                subset[size++] = nums[i];
            }
        }

        if (valid) {
            ans[*returnSize] = subset;
            (*returnColumnSizes)[*returnSize] = size;
            (*returnSize)++;
        } else {
            free(subset);
        }
    }

    return ans;
}