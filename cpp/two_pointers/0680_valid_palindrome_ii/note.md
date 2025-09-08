# 0680 - Valid Palindrome II

## 🧠 Idea

We are asked to determine if a string `s` can become a **palindrome** after deleting **at most one character**.  

Constraints:
- `1 <= s.length <= 10^5`
- `s` consists of lowercase English letters.

**Key insight:**
- A normal palindrome check compares characters from both ends inward.
- If we find a mismatch, we have **one chance** to delete either the left character or the right character, then continue checking.
- If either option yields a palindrome, return `true`; otherwise return `false`.

---

## 🔁 Step-by-step

1. Use two pointers:
   - `left = 0`
   - `right = s.size() - 1`

2. While `left <= right`:
   - If `s[left] == s[right]`, move inward:
     - `left++`, `right--`.
   - Otherwise (first mismatch):
     - Try skipping `s[left]` → check if `s[left+1..right]` is palindrome.
     - Try skipping `s[right]` → check if `s[left..right-1]` is palindrome.
     - If either is palindrome, return `true`.

3. If loop finishes with no mismatch or after one valid skip, return `true`.

---

## 🛠️ Key Points

- **Two-pointer + one deletion:** Only need to check at most **two substrings** after first mismatch.  
- **Helper function:** `isPalindrome(s, left, right)` efficiently checks a substring.  
- **Early stop:** We don’t need to test all deletions, just the first mismatch case.  

---

## ⏱️ Complexity

- **Time:** O(n)  
  - Each character is checked at most twice: once in main loop, once in `isPalindrome`.  
- **Space:** O(1)  
  - Only pointers and counters used, no extra data structures.  
