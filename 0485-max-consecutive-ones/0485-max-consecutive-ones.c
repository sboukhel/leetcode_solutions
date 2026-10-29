int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i = 0;
    int out = 0;
    int total = 0;
    while (i < numsSize){
        if (nums[i]){
            out++;
        }
        else{
            if (total < out){
                total = out;
                out = 0;
            }
            else
                out = 0;
        }
        i++;
    }
    if (total < out){
        return out;
    }
    return total;
}