/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int k = 0;

    for(int i = 0; i < nums1Size; i++) {
        int found = 0;

        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                found = 1;
                break;
            }
        }

        if(found) {
            int duplicate = 0;

            for(int j = 0; j < k; j++) {
                if(ans[j] == nums1[i]) {
                    duplicate = 1;
                    break;
                }
            }

            if(!duplicate) {
                ans[k++] = nums1[i];
            }
        }
    }

    *returnSize = k;
    return ans;
}