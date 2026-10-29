/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int *count = calloc(numsSize + 1, sizeof(int));
    if (!count) {
        return NULL;
    }

    int *tab = malloc(2 * sizeof(int));
    if (!tab) {
        free(count);
        return NULL;
    }
    *returnSize = 2;

    int i = 0;
    while (i < numsSize) {
        count[nums[i]]++;
        i++;
    }

    int n = 1;
    int found_dup = 0;
    int found_missing = 0;
    while (n <= numsSize) {
        if (count[n] == 2) {
            tab[0] = n;
            found_dup = 1;
        } else if (count[n] == 0) {
            tab[1] = n;
            found_missing = 1;
        }
        n++;
    }

    free(count);
    return tab;
}