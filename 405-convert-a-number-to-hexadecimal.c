char* toHex(int num) {
    int i = 0;
    unsigned int n = (unsigned int)num;
    if (num == 0){
        char *s = malloc(2);
        s[0] = '0';
        s[1] = '\0';
        return s;
    }
    unsigned int k = n;
    while (k > 0)
    {
        i++;
        k = k / 16;
    }
    char *s = malloc((i + 1) * sizeof(char));
    if (!s){
        return NULL;
    }
    char h[] = "0123456789abcdef";
    s[i] = '\0';
    i = i - 1;
    while (n > 0){
        s[i] = h[n % 16];
        n = n / 16;
        i--;
    } 
    return s;
}