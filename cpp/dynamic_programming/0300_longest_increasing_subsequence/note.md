# 0300 - Longest Increasing Subsequence

## 🧠 Idea

Use **binary search** to optimize the classic DP approach.

Maintain an array `dp` where `dp[i]` is the **smallest possible tail** of an increasing subsequence of length `i + 1`.

For each number `n` in `nums`:
- Binary search the leftmost index `i` such that `dp[i] >= n`
- If found, replace `dp[i] = n`
- Else, append `n` to extend the longest subsequence

This keeps the tails as small as possible, allowing room for longer sequences later.

## 🛠️ Key Points

- `dp[i]` stores the smallest **tail** of all increasing subsequences of length `i + 1`
- Binary search finds the correct index to replace or extend
- When `n == dp[middle]`, we still go `right = middle - 1` to maintain the **leftmost** replacement
- `dp.size()` equals the length of the LIS

## ⏱️ Complexity

- **Time:** O(n log n)
- **Space:** O(n)

## 🆚 Summary

| Approach                 | Time      | Space | Notes                                          |
|--------------------------|-----------|-------|------------------------------------------------|
| Brute-force              | O(2ⁿ)     | O(n)  | Try all subsequences — too slow                |
| DP (O(n²))               | O(n²)     | O(n)  | Compare each element with all previous ones    |
| Binary Search + Greedy ✅| O(n log n)| O(n)  | Maintain smallest tails using binary search    |
