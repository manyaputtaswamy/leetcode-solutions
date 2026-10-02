#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++) {
        maxProfitValue = max(maxProfitValue, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfitValue;
}

int main() {
    // Test Case 1 - Typical case
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    cout << "Test Case 1: "
         << maxProfit(prices1) << endl;

    // Test Case 2 - Edge case: prices always decrease
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Test Case 2: "
         << maxProfit(prices2) << endl;

    return 0;
}
