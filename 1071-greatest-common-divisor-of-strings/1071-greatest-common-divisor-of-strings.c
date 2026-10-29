#include <string.h>
#include <stdlib.h>
char* gcdOfStrings(char* str1, char* str2) {
    int len;
    int a = strlen(str1);
    int b = strlen(str2);
    char *t1 = malloc(strlen(str1) + strlen(str2) + 1);
    char *t2 = malloc(strlen(str1) + strlen(str2) + 1);
    strcpy(t1, str1);
    strcat(t1, str2);
    strcpy(t2, str2);
    strcat(t2, str1);
    if (strcmp(t1, t2) != 0){
        free(t1);
        free(t2);
        return ("");
    }
    free(t1);
    free(t2);
    while (b != 0){
        len = b;
        b = a % b;
        a = len;
    }
    int i;
    i = 0;
    char *str = malloc(a + 1);
    while (i < a){
        str[i] = str1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}