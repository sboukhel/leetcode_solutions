int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    int r = 0;
    while (i < numsSize){
       if(nums[i] == target){
        r = i;
        return r;
       }
       else if (nums[i] > target){
        r = i;
        return r;
       }
       int j = i;
       if (j + 1 == numsSize){
        r  = i + 1;
        return r;
       }
       i++;
    }
    return r;
}