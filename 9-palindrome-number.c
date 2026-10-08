bool isPalindrome(int x) {
    long i;
    long t;
    
    if (x >= 0 && x <= 9){
        return true;
    } 
    if (x < 0 || x % 10 == 0)
    {
        return false;
    }
    i = 1;
    while (x / i >= 1)
    {
        t = i;
        i = i * 10;
    }
    i = 10;
    while (t >= i){
        if ((x / t) % 10 == (x % i) / (i / 10)){
            t = t / 10;
            i = i * 10;
        }
        else
           return false;
    }
    return true;
}