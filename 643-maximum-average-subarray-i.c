double findMaxAverage(int* nums, int numsSize, int k) {
    long long max = 0;
    int i  = 0;
    while (i < k){
        max += nums[i];
        i++;
    }
    long long maxnum = max;
    i = k;
    while (i < numsSize){
        max += nums[i] - nums[i - k];
        if (max > maxnum){
            maxnum = max;
        }
        i++;
    }
    return (double)maxnum / k;
} 