#include <string.h>
#include <stdlib.h>

char* reverseWords(char* s) {
    int k = strlen(s) - 1;
    int i = 0;
    int start = 0;
    int j = 0;
    char *str = malloc(k + 2);

    while (k >= 0){
        str[i] = s[k];
        k--;
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i])
    {
        while (str[i] == ' ' && str[i]){
            i++;
        }
        if (str[i] == '\0'){
          j = j - 1;
          while (s[j] != '\0'){
            s[j] = '\0';
            j++;
          }
          free(str);
          return s;
        }
        start = i;
        while (str[i] != ' ' && str[i]){
            i++;
        }
        k = i;
        while ( k - 1 >= start){
            s[j] = str[k - 1];
            k--;
            j++;
        }
        if (str[i] == ' '){
          s[j] = ' ';
          j++;
        }
    }

    while (s[j] != '\0'){
        s[j] = '\0';
        j++;
    }

    free(str);
    return s;
}