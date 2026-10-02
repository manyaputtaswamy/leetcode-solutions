## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:**  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2150502130/

### Approach

I keep track of the minimum price seen so far.
For every price, I calculate the possible profit and keep the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, the maximum profit is 0 because no profitable transaction is possible.