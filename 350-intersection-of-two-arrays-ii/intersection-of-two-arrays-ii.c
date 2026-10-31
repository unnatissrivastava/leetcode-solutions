/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int used[nums2Size];
    int k = 0;

    for(int i = 0; i < nums2Size; i++)
        used[i] = 0;

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j] && used[j] == 0) {
                ans[k++] = nums1[i];
                used[j] = 1;
                break;
            }
        }
    }

    *returnSize = k;
    return ans;
}