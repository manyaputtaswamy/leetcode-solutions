## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/submissions/2150507035/

### Approach

We move all non-zero elements to the beginning of the array while maintaining their order.
After that, we fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in-place.
The relative order of non-zero elements is maintained.