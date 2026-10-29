int check(char *s){
    int i = 0;
    int k = strlen(s) - 1;
    while (i <= k){
        if (s[i] == s[k]){
            i++;
            k--;
        }
        else
            return 0;
    }
    return 1;
}
char* firstPalindrome(char** words, int wordsSize) {
    int j = 0;
    while (j < wordsSize){
        if (check(words[j]) == 1){
            return words[j];
        }
        j++;
    }
    return "";
}