## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers, left and right, to search the sorted array.
Check the middle element and eliminate half of the search space each time.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works because the input array is sorted.
If the target is not found, the solution returns -1.