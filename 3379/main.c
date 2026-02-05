#include <stdlib.h>
#include <math.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructTransformedArray(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    for(int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            result[i] = 0;
        } else {
            int j = (i + nums[i]) % numsSize;
            if (j < 0) {
                j += numsSize;
            }
            result[i] = nums[j];
        }
    }

    return result;
}
