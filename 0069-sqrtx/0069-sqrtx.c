int mySqrt(int x) {
    if (x < 2)
        return x;

    int k = 1;
    int i = x / 2;
    int ans = 0;

    while (k <= i) {
        int m = k + (i - k) / 2;

        if (m <= x / m) {
            ans = m;
            k = m + 1;
        } else {
            i = m - 1;
        }
    }

    return ans;
}