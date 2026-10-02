## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/submissions/2150505470/

### Approach

I used two pointers to represent the current search range.
The middle element is checked and half of the search space is removed each time.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input array must be sorted for binary search to work correctly.