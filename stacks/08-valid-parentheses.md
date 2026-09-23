## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/submissions/2150508482/

### Approach

We use a stack to store opening brackets.
For each closing bracket, we check whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

A stack follows the Last In, First Out (LIFO) principle.
The parentheses are valid only when all brackets are properly matched.