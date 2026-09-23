## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2150502130/

### Approach

We keep track of the minimum price seen so far.
For each price, we calculate the possible profit and keep the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

We must buy before selling.
If no profit is possible, the maximum profit is 0.