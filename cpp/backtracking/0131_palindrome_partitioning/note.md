# 0131 - Palindrome Partitioning

## 🧠 Idea

Partition a string `s` into all possible combinations of substrings such that **every substring is a palindrome**.  
We solve this with **backtracking + DP precomputation**:

- **Precompute palindromes**: `dp[i][j] = true` if `s[i..j]` is a palindrome.
- **Backtracking**: Build the partition step-by-step using a temporary path:
  - At each step, try every possible end index `end` ≥ `start`.
  - Only append `s[start..end]` to the path if it’s a palindrome (`dp[start][end]`).
  - Recurse with `start = end + 1`.
- Once `start == n`, the current path is a valid partition → add to results.

---

## 🔁 Step-by-step

1. Initialize `dp[n][n]` and fill it using:

- `dp[i][j] = (s[i] == s[j]) && (j - i < 2 || dp[i+1][j-1])`
- `j - i < 2` handles length 1 or 2 substrings.
- Otherwise, a substring is palindrome if its ends match and the middle substring is palindrome.

2. Initialize an empty `path` (vector<string>) and reserve capacity `n`.
3. Initialize the result container `res` and optionally **reserve space**:

   ```cpp
   res.reserve(1 << (n - 1)); // pre-allocate space for ~2^(n-1) possible partitions
4. Start backtracking from `start = 0`.
5. For each `end` from `start` to `n-1`:
- If `dp[start][end]` is true:
  - Append `s.substr(start, end-start+1)` to path.
  - Recurse with `start = end + 1`.
  - Backtrack by popping the last substring from path.
1. When `start == n`, copy path into results.

---

## 🛠️ Key Points

- **DP precomputation** allows **O(1)** palindrome checks during backtracking.
- **path as vector<string>** is a shared temporary container; must **copy path** into results, cannot move it.
- Using `path.reserve(n)` reduces vector reallocations during recursion.
- Backtracking ensures all partitions are generated without extra pruning.

---

## ⏱️ Complexity

- **Time:**  
- DP precomputation: O(n²)  
- Backtracking: O(2^n * n) in the worst case (exponential number of partitions, each with O(n) substrings)
- **Space:**  
- O(n²) for dp + O(n) for recursion stack + O(n) for path storage
