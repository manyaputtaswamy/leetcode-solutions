## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use two pointers, left and right, to search the sorted array.
We check the middle element and reduce the search range based on the target value.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works only when the array is sorted.
If the target is not found, we return -1.