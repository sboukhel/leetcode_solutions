int largestAltitude(int* gain, int gainSize) {
    short i = 0;
    int sum = 0;
    int max = 0;
    while (i < gainSize){
        sum += gain[i];
        if (max < sum){
            max = sum;
        }
        i++;
    }
    return max;
}