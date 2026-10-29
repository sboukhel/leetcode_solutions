/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {     
    int i;     
    int prefix;
    int suffix;
    
    *returnSize = numsSize; 
    
    int *str = malloc(numsSize * sizeof(int));     
    if (!str){         
        return 0;     
    }
    i = 0;
    prefix = 1;
    while (i < numsSize) {
        str[i] = prefix;
        prefix *= nums[i];
        i++;
    }
    i = numsSize - 1;
    suffix = 1;
    while (i >= 0) {
        str[i] *= suffix;
        suffix *= nums[i];
        i--;
    }
    
    return str; 
}
