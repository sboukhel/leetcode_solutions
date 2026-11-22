int titleToNumber(char* columnTitle) {
    int result = 0;
    for (int i = 0; columnTitle[i]; i++){
        result *= 26;
        result = result + (columnTitle[i] - 'A' + 1);
    }
    return result;
}