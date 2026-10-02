## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/submissions/2150503696/

### Approach

I start with the first string as the prefix.
I compare it with every other string and reduce the prefix until it matches.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common prefix, the result is an empty string.