## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Use an index to track where the next non-zero element should go.
Swap each non-zero element into its correct position while keeping all zeroes at the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements is preserved.