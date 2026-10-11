/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    if (numsSize <= 1) return nums;
    for (int i = 1; i < numsSize; i++) {
        int child = i;
        while (child > 0) {
            int parent = (child - 1) / 2;
            if (nums[child] > nums[parent]) {
                int tmp = nums[child];
                nums[child] = nums[parent];
                nums[parent] = tmp;
                child = parent;
            } else {
                break;
            }
        }
    }
    for (int i = numsSize - 1; i > 0; i--) {
        int tmp = nums[0];
        nums[0] = nums[i];
        nums[i] = tmp;
        int parent = 0;
        while (1) {
            int leftChild = 2 * parent + 1;
            int rightChild = 2 * parent + 2;
            int largest = parent;

            if (leftChild < i && nums[leftChild] > nums[largest]) {
                largest = leftChild;
            }
            if (rightChild < i && nums[rightChild] > nums[largest]) {
                largest = rightChild;
            }
            if (largest != parent) {
                int swapTmp = nums[parent];
                nums[parent] = nums[largest];
                nums[largest] = swapTmp;
                parent = largest;
            } else {
                break;
            }
        }
    }

    return nums;
}
