int pivotIndex(int* nums, int numsSize) {
    int totalsum = 0;
    int i = 0;
    while (i < numsSize){
        totalsum += nums[i];
        i++;
    }
    int leftsum = 0;
    i = 0;
    while (i < numsSize){
        if (leftsum == totalsum - leftsum - nums[i]){
            return i;
        }
        leftsum += nums[i];
        i++;
    }
    return -1;
}