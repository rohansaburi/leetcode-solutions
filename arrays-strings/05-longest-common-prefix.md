## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Start with the first string as the prefix.
Compare it with each remaining string and keep only the characters that match from the beginning.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

If there is no common prefix, the solution returns an empty string.