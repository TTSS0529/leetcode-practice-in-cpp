# 0524 - Longest Word in Dictionary through Deleting

## 🧠 Idea

We are asked to find the **longest string in `dictionary`** that can be formed by **deleting some characters** from the given string `s`.  
If multiple strings have the same length, return the **lexicographically smallest** one.  
If none can be formed, return `""`.

Constraints:  
- `1 <= s.length <= 1000`  
- `1 <= dictionary.length <= 1000`  
- `1 <= dictionary[i].length <= 1000`  
- All strings consist of lowercase English letters.

**Key insight:**  
- To check if a word `dic` from `dictionary` is a subsequence of `s`, use **two pointers** to match characters in order.  
- Track the **best candidate** by comparing length first, then lexicographical order.  

---

## 🔁 Step-by-step

1. Iterate over each word `dic` in `dictionary`.  
2. Check if `dic` is a subsequence of `s`:  
   - Use two pointers (`i` for `s`, `j` for `dic`).  
   - Move `i` forward always, move `j` only when `s[i] == dic[j]`.  
   - If `j` reaches the end, `dic` is a subsequence.  
3. If `dic` is valid:  
   - Compare with current `res`:  
     - If `dic.size() > res.size()`, update.  
     - If equal length but `dic < res` lexicographically, update.  
4. Return `res`.  

---

## 🛠️ Key Points

- **Subsequence check:** Two-pointer scan runs in `O(|s| + |dic|)`.  
- **Dictionary iteration:** Try all words, keep track of the best.  
- **Tie-breaking rule:** Lexicographical comparison ensures smallest word is picked when lengths match.  

---

## ⏱️ Complexity

- **Time:** `O(|dictionary| * |s|)` in the worst case.  
  - Each word is checked against `s`.  
- **Space:** `O(1)`  
  - Only pointers and temporary strings used.  
