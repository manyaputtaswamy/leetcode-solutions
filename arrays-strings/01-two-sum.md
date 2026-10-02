## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/submissions/2150501467/

### Approach

I used two nested loops to check every possible pair of numbers.
When the sum of two numbers equals the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution should handle duplicate values, such as [3, 3] with target 6.