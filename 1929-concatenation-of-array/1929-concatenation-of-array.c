/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int *getConcatenation(int *nums, int numsSize, int *returnSize) {
    int i;
    int k;
    *returnSize = numsSize * 2;
    int *result = malloc((*returnSize) * sizeof(int));
    if (!result){
        return NULL;
    }
    i = 0;
    k = 0;
    while (k < numsSize){
        result[i] = nums[k];
        i++;
        k++;
    }
    k = 0;
    while (k < numsSize){
        result[i] = nums[k];
        k++;
        i++;
    }
    return (result);
}