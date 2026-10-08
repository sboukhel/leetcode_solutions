int reverse(int x){
    long i;
    int sign;

    i = 0;
    sign = 1;
    if (x == -2147483648)
        return (0);
    if (x < 0)
    {   sign *= -1;
        x = -x;
    }
    while (x > 9)
    {
        i = (i * 10) + (x % 10);
        x = x / 10;
    }
    i = (i * 10) + (x % 10);
    if (i > 2147483647 || i < -2147483648)
        return 0;
    return (sign * (int)i);
}