bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n)
{
    int l;
    int i;
    i = 0;
    l = 0;
    while (i < flowerbedSize){
        if (flowerbed[i] == 0
            && (i == 0 || flowerbed[i - 1] == 0)
            && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)){
            flowerbed[i] = 1;
            l++;
        }
        i++;
    }
    if (l >= n)
        return true;
    else
        return false;
}