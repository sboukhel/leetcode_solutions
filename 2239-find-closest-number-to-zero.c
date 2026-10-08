int findClosestNumber(int* nums, int numsSize) {
    int closest = nums[0];
    int i = 1;
    while (i < numsSize) {
        int a = nums[i] < 0 ? -nums[i] : nums[i];
        int b = closest < 0 ? -closest : closest;
        if (a < b || (a == b && nums[i] > closest))
            closest = nums[i];
            i++;
    }
    return closest;
}