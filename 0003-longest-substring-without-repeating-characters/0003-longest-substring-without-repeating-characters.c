#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int  k[256];
    int sum_max = 0;
    int start = 0;
    if (!s || s[0] == '\0'){
        return 0;
    }
    memset(k, -1, sizeof(k));
    for (int end = 0;s[end]; end++){
        if (k[(unsigned char)s[end]] >= start) {
            start = k[(unsigned char)s[end]] + 1;
        }
        k[(unsigned char)s[end]] = end;
        int current_len = end - start + 1;
        if (current_len > sum_max) {
            sum_max = current_len;
        }
    }
    return sum_max;
}
