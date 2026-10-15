int mySqrt(int x) {
  
    int k = 0;

    while ((long long)k * k <= x) {
        k++;
    }

    return k - 1;
}
  