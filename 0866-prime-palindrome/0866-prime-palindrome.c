bool prime(int n){
    if (n < 2){
        return 0;
    }
    if (n == 2)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    int i = 5;
    while(i * i <= n){
        if (n % i == 0 || n % (i + 2) == 0){
            return 0;
        }
        i += 6;
    }
    return 1;
}

int primePalindrome(int n) {
    if (n <= 2) return 2;
    if (n <= 3) return 3;
    if (n <= 5) return 5;
    if (n <= 7) return 7;
    if (n <= 11) return 11;
    for (int root = 1; root < 100000; root++) {
        int palindrome = root;
        int temp = root / 10;
        while (temp > 0) {
            palindrome = palindrome * 10 + (temp % 10);
            temp /= 10;
        }
        if (palindrome >= n && prime(palindrome)) {
            return palindrome;
        }
    }
    return -1;
}