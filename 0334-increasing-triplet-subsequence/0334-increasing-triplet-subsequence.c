#include <stdbool.h>
#include <limits.h>

bool increasingTriplet(int* nums, int numsSize) {
    int first = INT_MAX;
    int second = INT_MAX;
    int i = 0;

    while (i < numsSize) {
        if (nums[i] <= first) {
            first = nums[i];
        } else if (nums[i] <= second) {
            second = nums[i];
        } else {
            return true;
        }
        i++;
    }

    return false;
}
