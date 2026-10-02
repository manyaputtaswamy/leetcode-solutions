## Problem: Valid Parentheses (Easy)

**Link:**  https://leetcode.com/problems/valid-parentheses/submissions/2150508482/

### Approach

I used a stack to store opening brackets.
Whenever a closing bracket is found, it is compared with the top opening bracket in the stack.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The brackets must be correctly matched and properly nested.
An input such as "(]" is invalid.