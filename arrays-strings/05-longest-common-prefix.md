## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

We take the first string as the initial prefix.
We compare it with each remaining string and reduce the prefix until all strings have the same starting characters.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

If there is no common prefix, the result is an empty string.