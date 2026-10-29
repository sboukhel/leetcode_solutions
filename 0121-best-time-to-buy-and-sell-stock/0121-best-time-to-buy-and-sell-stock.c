int maxProfit(int *prices, int pricesSize)
{
    int i;
    int buy;
    int sell_stock;
    int profit;

    buy = prices[0];
    sell_stock = 0;

    i = 1;
    while (i < pricesSize)
    {
        if (prices[i] < buy)
            buy = prices[i];
        else
        {
            profit = prices[i] - buy;
            if (profit > sell_stock)
                sell_stock = profit;
        }
        i++;
    }
    if (sell_stock <= 0)
        return (0);
    return (sell_stock);
}