#include <stdlib.h>

int* shuffle(int *nums, int numsSize, int n, int *returnSize) {
    *returnSize = numsSize;
    int *result = malloc((*returnSize) * sizeof(int));
    
    if (result == NULL) {
        return NULL; 
    }

    int writeIdx = 0;
    int i = 0;
    while (i < n){
        result[writeIdx++] = nums[i];
        result[writeIdx++] = nums[i + n];
        i++;
    }

    return result;
}