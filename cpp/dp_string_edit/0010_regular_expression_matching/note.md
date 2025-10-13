# 0010 - Regular Expression Matching

## 🧠 Idea

Use **dynamic programming** to simulate matching behavior of a simplified regular expression engine that supports:

- `.`: Matches any single character  
- `*`: Matches **zero or more** of the preceding element

Define `dp[i][j]` as whether `s[0..i-1]` matches `p[0..j-1]`.

### State Transition

- If `p[j - 1] != '*'`:

  ```
  dp[i][j] = dp[i-1][j-1] && (s[i-1] == p[j-1] || p[j-1] == '.')
  ```

- If `p[j - 1] == '*'`, we have two options:

- Zero occurrence of preceding char:

  ```
  dp[i][j] = dp[i][j-2]
  ```

- One or more occurrence:

  ```
  dp[i][j] = dp[i-1][j] && (s[i-1] == p[j-2] || p[j-2] == '.')
  ```

## 🛠️ Key Points

- `dp[0][0] = true`: Empty string matches empty pattern
- When initializing first row (`s = ""`), only patterns like `"a*"` or `"a*b*"` can match
- `p[j - 2]` is the character preceding `*`, so match `(s[i - 1] == p[j - 2])`
- Edge conditions must be handled carefully due to indexing

## ⏱️ Complexity

- **Time:** O(m × n), where m = `s.size()`, n = `p.size()`
- **Space:** O(m × n)
