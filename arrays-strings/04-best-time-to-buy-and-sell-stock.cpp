#include <iostream>
using namespace std;

int main()
{
    // Test Case 1: Typical case
    // Input: prices = {7, 1, 5, 3, 6, 4}
    // Expected Output: 5

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;

        if (prices[i] < minPrice)
            minPrice = prices[i];
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    // Test Case 2: Edge case
    // Input: prices = {7, 6, 4, 3, 1}
    // Expected Output: 0

    return 0;
}