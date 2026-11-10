/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size,
                        int* returnSize) {
    int n1 = nums1Size;
    int n2 = nums2Size;

    int* ans = (int*)malloc(n1 * sizeof(int));

    int index = 0;
    int i = 0;

    while (i < n1) {
        int search = nums1[i];

        for (int j = 0; j < n2; j++) {
            if (nums1[i] == nums2[j]) {
                if (j + 1 < n2 && nums2[j + 1] > nums2[j]) {
                    ans[index] = nums2[j + 1];
                    index++;
                } 
                else {
                    ans[index] = -1;

                    for (int k = j; k < n2; k++) {
                        if (nums2[k] > nums2[j]) {
                            ans[index] = nums2[k];
                            break;
                        } 
                    }
                    index++;
                }
            }
        }

        i++;
    }

    *returnSize = index;
    return ans;
}