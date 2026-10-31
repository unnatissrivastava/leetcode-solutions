/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    int k = 0;

    int seen[numsSize + 1];
    for(int i = 0; i <= numsSize; i++)
        seen[i] = 0;

    for(int i = 0; i < numsSize; i++)
        seen[nums[i]] = 1;

    for(int i = 1; i <= numsSize; i++) {
        if(seen[i] == 0)
            ans[k++] = i;
    }

    *returnSize = k;
    return ans;
}