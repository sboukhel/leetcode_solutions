/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max;
    int i;
    max = candies[0];
    i = 0;
    while (i < candiesSize){
        if (max < candies[i])
            max = candies[i];
        i++;
    }
    *returnSize = candiesSize;
    bool *result = malloc(candiesSize * sizeof(bool));
    if (result == NULL)
        return NULL;
    i = 0;
    while (i < candiesSize){
        if (candies[i] + extraCandies >= max)
            result[i] = true;
        else
            result[i] = false;
        i++;
    }
    return result;
}