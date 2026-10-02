## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Track the minimum price seen so far while scanning the prices.
At each day, calculate the profit from selling that day and keep the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If prices only decrease, the maximum profit remains 0.