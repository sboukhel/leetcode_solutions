int climbStairs(int n) {
    if (n <= 0)
        return (0);
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    int first = 1;
    int second = 2;
    int result = 0;
    int i = 3;
    while (i <= n){
        result = first + second;
        first = second;
        second = result;
        i++;
    } 
    return result;
}