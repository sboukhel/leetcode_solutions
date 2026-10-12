#include <stdlib.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void sorting(int *tab, int start, int end)
{
    if (start >= end)
        return;

    int r = start + rand() % (end - start + 1);
    swap(&tab[start], &tab[r]);
    int pivot = tab[start];

    int lt = start, i = start + 1, gt = end;
    while (i <= gt)
    {
        if (tab[i] < pivot)
            swap(&tab[lt++], &tab[i++]);
        else if (tab[i] > pivot)
            swap(&tab[i], &tab[gt--]);
        else
            i++;
    }
    sorting(tab, start, lt - 1);
    sorting(tab, gt + 1, end);
}

int *sortArray(int *nums, int numsSize, int *returnSize)
{
    sorting(nums, 0, numsSize - 1);
    *returnSize = numsSize;
    return nums;
}
