## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to store opening brackets.
For each closing bracket, check whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The string is valid only when every opening bracket has the correct closing bracket.