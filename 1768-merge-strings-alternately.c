
#include <stdlib.h>
char *mergeAlternately(char *word1, char *word2)
{
    int i;
    int len1;
    int len2;
    char *str;
    int j;
    int total;

    len1 = 0;
    while (word1[len1])
        len1++;
    while (word2[len2])
        len2++;
    total = len1 + len2;
    str = malloc(total + 2);
    if (!str)
    return NULL;
    i = 0;
    j = 0;
    while (word1[i])
    {
        str[j] = word1[i];
        i++;
        if (i <= len2)
            j += 2;
        else
            j++;
    }
    i = 0;
    j = 1;
    while (word2[i])
    {
        str[j] = word2[i];
        i++;
        if (i < len1)
            j += 2;
        else
            j++;
    }
    str[total] = '\0';
    return (str);
}