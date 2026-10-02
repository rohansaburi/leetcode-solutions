## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Use two loops to check every possible pair of numbers.
When their sum equals the target, return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution checks each pair only once by starting the second loop after the first index.