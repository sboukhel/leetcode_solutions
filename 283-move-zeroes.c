void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int k = 0;

    while (i < numsSize){
        if (nums[i] != 0){
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    while (k < numsSize){
        nums[k] = 0;
        k++;
    }
}