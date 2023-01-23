#include <iostream>
using namespace std;

int maxProfit(int prices[], int n)
{
    int buy = prices[0], max_profit = 0;
    for (int i = 1; i < n; i++)
    {
            // Checking for lower buy value
            if (buy > prices[i])
                buy = prices[i];

            // Checking for higher profit
            else if (prices[i] - buy > max_profit)
                max_profit = prices[i] - buy;
    }
    return max_profit;
}

int main()
{
    int prices[] = { 7, 1, 10, 6, 4 };
    int n = sizeof(prices) / sizeof(prices[0]);

    for(int j=0; j<n; j++)
    {
        if(prices[j] <0 || prices[j] >= 105)
        {
            cout << "each element value has to be less than 105 and greater than -1";
            return 0;
        }
    }
    if(1 <= n <= 105)
    {
        int max_profit = maxProfit(prices, n);
        cout << max_profit << endl;
    }
    else
    {
        cout << "Array length has to be less than 106 and greater than 0";
    }

    return 0;
}
