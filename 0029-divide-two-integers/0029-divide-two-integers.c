#include <limits.h>
#include <math.h>
#include <stdbool.h>
int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    bool isNegative = (dividend < 0) ^ (divisor < 0);
    long long absDividend = (dividend == INT_MIN) ? ((long long)INT_MAX + 1) :llabs((long long)dividend);
    long long absDivisor = llabs((long long)divisor);
    int result = 0;
    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor;
        long long multiple = 1;
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        absDividend -= tempDivisor;
        result += multiple;
    }
    return isNegative ? -(unsigned int)result : (unsigned int)result;
}