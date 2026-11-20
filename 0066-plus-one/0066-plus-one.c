#include <stdlib.h>
int numberofdigitarray(int *digit, int digitsize){
    int carry = 1;
    for (int i = digitsize - 1; i >= 0; i--){
        int sum = digit[i] + carry;
        digit[i] = sum % 10;
        carry = sum / 10;
    }
    return carry;
}
int *arrayofresult(int  carry, int *size, int* originaldigits, int originalsize){
    if (carry == 1) {
        *size = originalsize + 1;
        int *finalresult = malloc((*size) * sizeof(int));
        finalresult[0] = 1;
        for (int i = 1; i < *size; i++) {
            finalresult[i] = originaldigits[i - 1];
        }
        return finalresult;
    } else {
        *size = originalsize;
        int *finalresult = malloc((*size) * sizeof(int));
        for (int i = 0; i < *size; i++) {
            finalresult[i] = originaldigits[i];
        }
        return finalresult;
    }
}
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    long long number = numberofdigitarray(digits, digitsSize);
    int size = 0;
    int *result = arrayofresult(number, &size, digits, digitsSize);
    *returnSize = size;
    return result;
}
