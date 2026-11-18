#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

char* longestPalindrome(char* s) {
    if (!s || s[0] == '\0'){
        char *empty = malloc(1);
        empty[0] = '\0';
        return empty;
    }

    int start = 0;
    int end = strlen(s) - 1;
    int best_start = 0;
    int best_end = 0;

    while (start < end) {
        if (s[start] == s[end]) {
            if (ispalindrome(s, start, end)) {
                if ((end - start) > (best_end - best_start)) {
                    best_start = start;
                    best_end = end;
                }
                start++;
                end = strlen(s) - 1;
                continue;
            }
        }

        end--;

        if (start >= end) {
            start++;
            end = strlen(s) - 1;
        }
    }

    int size = best_end - best_start + 1;
    char *result = malloc(size + 1);
    int index = 0;
    while (best_start <= best_end) {
        result[index++] = s[best_start++];
    }
    result[index] = '\0';

    return result;
}
