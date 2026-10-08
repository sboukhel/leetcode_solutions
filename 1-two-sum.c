#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    int j;

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
            j++;
        }
        i++;
    }

    *returnSize = 0;
    return NULL;
}