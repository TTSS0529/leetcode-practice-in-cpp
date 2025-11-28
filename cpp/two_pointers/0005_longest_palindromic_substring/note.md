# 0005 - Longest Palindromic Substring

## 🧠 Idea
We want to find the **longest palindromic substring** within a given string `s`.  
A palindrome is symmetric around its center, so the key idea is to **expand around every possible center**.

There are two types of palindrome centers:
1. **Odd-length**: center at a single character (`center, center`)
2. **Even-length**: center between two characters (`center, center + 1`)

By expanding around all `2n − 1` possible centers, we can detect every palindrome found in the string.

---

## 🛠️ Key Points
- For each index `center`, check two possibilities:
  - `checkPalin(s, center, center)` → odd-length palindrome  
  - `checkPalin(s, center, center + 1)` → even-length palindrome
- Expansion continues while:
  - `left >= 0`
  - `right < n`
  - `s[left] == s[right]`
- After expanding, compute the palindrome length:
  - Update `start` and `max_len` if this palindrome is the longest so far.
- Each expansion is O(n), and we attempt `2n` centers, leading to overall **O(n²)** time.

---

## 💡 Intuition
A palindrome grows outward from its center.  
Instead of checking all substrings (which would be O(n³)), we only expand from valid centers and stop as soon as the symmetry breaks.

Think of it as stretching a rubber band equally left and right from a center —  
as long as both sides match, the palindrome grows.

---

## ⏱️ Complexity
- **Time:** `O(n²)` — checking all centers with outward expansion  
- **Space:** `O(1)` — only constant extra variables are used

