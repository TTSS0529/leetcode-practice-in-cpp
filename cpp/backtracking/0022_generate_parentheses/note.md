# 0022 - Generate Parentheses

## 🧠 Idea

Generate all combinations of well-formed parentheses for `n` pairs.  
Use **backtracking** to build the string step-by-step while maintaining validity:

- Keep track of how many `'('` (`left`) and `')'` (`right`) have been used.
- Add `'('` only if `left < n`.
- Add `')'` only if `right < left` (to maintain valid parentheses).

## 🔁 Step-by-step

1. Initialize empty string `curr` and reserve capacity `2 * n` to avoid reallocations.
2. Start backtracking with `left = 0`, `right = 0`.
3. If `left == n` and `right == n`, add `curr` to results.
4. If `left < n`, append `'('` and recurse with `left + 1`.
5. If `right < left`, append `')'` and recurse with `right + 1`.
6. Backtrack by removing the last character after each recursion.

## 🛠️ Key Points

- Using `curr.reserve(2 * n)` improves performance by minimizing memory reallocations during `push_back`.
- Classic backtracking with pruning ensures only valid strings are generated.
- In-place modification of `curr` string and popping back keeps memory usage low and avoids copies.

## ⏱️ Complexity

- **Time:** O(4^n / √n) — Catalan number complexity, as the number of valid parentheses grows catalanically.
- **Space:** O(n) — recursion depth and temporary string storage.
