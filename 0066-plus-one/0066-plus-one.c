#include <stdlib.h>
long long numberofdigitarray(int *digit, int digitsize){
    int carry = 1;
    for (int i = digitsize - 1; i >= 0; i--){
        int sum = digit[i] + carry;
        digit[i] = sum % 10;
        carry = sum / 10;
    }
    return carry;
}
int *arrayofresult(long long carry, int *size, int* original_digits, int original_size){
    if (carry == 1) {
        *size = original_size + 1;
        int *finalresult = malloc((*size) * sizeof(int));
        finalresult[0] = 1;
        for (int i = 1; i < *size; i++) {
            finalresult[i] = original_digits[i - 1];
        }
        return finalresult;
    } else {
        *size = original_size;
        int *finalresult = malloc((*size) * sizeof(int));
        for (int i = 0; i < *size; i++) {
            finalresult[i] = original_digits[i];
        }
        return finalresult;
    }
}
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    long long carry = numberofdigitarray(digits, digitsSize);
    int size = 0;
    int *result = arrayofresult(carry, &size, digits, digitsSize);
    *returnSize = size;
    return result;
}
