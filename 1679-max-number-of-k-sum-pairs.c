#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int maxOperations(int* nums, int numsSize, int k){
    qsort(nums, numsSize, sizeof(int), compare);
    
    int i = 0;
    int j = numsSize - 1;
    int count = 0;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == k) {
            count++;
            i++;
            j--;
        } else if (sum > k) {
            j--;
        } else {
            i++;
        }
    }

    return count;
}