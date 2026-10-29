/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int j = 1;
    int sum = 0;
    *returnSize = numsSize;
    int *tab = malloc(numsSize * sizeof(int));
    if (!tab)
        return NULL;
    while (i < numsSize){
        if (j == numsSize){
            tab[i] = sum;
            i++;
            j = -1;
            sum = 0;
        }
        else if (nums[i] > nums[j]){
            sum++;
        }
        j++;
    }
    return tab;

}