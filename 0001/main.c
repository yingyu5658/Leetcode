/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 这是一个暴力解法
 */
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    int nums_max_idx = numsSize - 1;
    for (int i = 0; i < nums_max_idx; i++) {
        for (int j = i + 1; j <= nums_max_idx; j++) {
            if (nums[i] + nums[j] == target) {
                int *rtn = malloc(sizeof(int) * 2);
                rtn[0] = i;
                rtn[1] = j;
                *returnSize = 2;
                return rtn;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
