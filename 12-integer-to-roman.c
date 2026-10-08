#include <stdlib.h>
char* intToRoman(int num) {
    char *str;
    int i = 0;

    str = malloc(256);
    while (num - 1000 >= 0){
        str[i] = 'M';
        num = num - 1000;
        i++;
    }
    while (num - 900 >= 0){
        str[i] = 'C';
        i++;
        str[i] = 'M';
        num = num - 900;
        i++;
    }
    while (num - 500 >= 0){
        str[i] = 'D';
        num = num - 500;
        i++;
    }
    while (num - 400 >= 0){
        str[i] = 'C';
        i++;
        str[i] = 'D';
        num = num - 400;
        i++;
    }
    while (num - 100 >= 0){
        str[i] = 'C';
        num = num - 100;
        i++;
    }
    while (num - 90 >= 0){
        str[i] = 'X';
        i++;
        str[i] = 'C';
        num = num - 90;
        i++;
    }
    while (num - 50 >= 0){
        str[i] = 'L';
        num = num - 50;
        i++;
    }
    while (num - 40 >= 0){
        str[i] = 'X';
        i++;
        str[i] = 'L';
        num = num - 40;
        i++;
    }
    while (num - 10 >= 0){
            str[i] = 'X';
            num = num - 10;
            i++;
    }
    while (num - 9 >= 0){
        str[i] = 'I';
        i++;
        str[i] = 'X';
        num = num - 9;
        i++;
    }
    while (num - 5 >= 0){
        str[i] = 'V';
        num = num - 5;
        i++;
    }
    while (num - 4 >= 0){
        str[i] = 'I';
        i++;
        str[i] = 'V';
        num = num - 4;
        i++;
    }
    while (num - 1 >= 0){
        str[i] = 'I';
        num = num - 1;
        i++;
    }
    str[i] = '\0';
    return str;
}