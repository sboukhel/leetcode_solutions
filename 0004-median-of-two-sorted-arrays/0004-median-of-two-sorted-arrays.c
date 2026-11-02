#include <stdlib.h>
int compare_ints(const void *a, const void *b) {
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;
    return (num1 - num2);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *sortnum = malloc((nums1Size + nums2Size) * sizeof(int));
    short i = 0;
    double sum = 0.00000;
    while (i < nums1Size){
        sortnum[i] = nums1[i];
        i++;
    }
    short j = 0;
    while (j < nums2Size){
        sortnum[i++] = nums2[j++];
    }
    j = nums1Size + nums2Size;
    qsort(sortnum, j, sizeof(int), compare_ints);
    i = 1;
    if (j % 2 == 0){
        j = j / 2 - 1;
        sum = (sortnum[j] + sortnum[j + 1]);
    }
    else if (j % 2 != 0){
        j = (j - 1) / 2;
        return sortnum[j];
        
    }
    return sum / 2.00000;
    
}