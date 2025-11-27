# 0028 - Find the Index of the First Occurrence in a String

## 🧠 Idea
We need to find the **first occurrence of a substring (`needle`) in a string (`haystack`)**.  
The naive approach checks every position in `haystack` but is **O(m*n)** in time.  

To improve efficiency, we can use the **KMP (Knuth-Morris-Pratt) algorithm**, which avoids redundant comparisons by precomputing a **Longest Prefix Suffix (LPS) array** for the `needle`.

---

## 🛠️ Key Points
- **LPS array:** `lps[i]` stores the length of the longest proper prefix of `needle[0..i]` which is also a suffix.  
- Use two pointers `i` (for `haystack`) and `j` (for `needle`):
  - If characters match (`haystack[i] == needle[j]`), increment both pointers.
  - If `j` reaches `needle.size()`, we found a match at `i - j`.
  - If characters mismatch:
    - If `j > 0`, jump `j` to `lps[j-1]` instead of starting from 0.
    - Otherwise, move `i` forward by 1.
- This allows **O(m + n)** time complexity by avoiding re-comparing characters unnecessarily.

---

## 💡 Intuition
The LPS array encodes **self-similarity in the `needle`**, so when a mismatch happens, we know exactly where to resume matching instead of starting over.  

Think of it as **sliding the needle intelligently** across the haystack.

---

## ⏱️ Complexity
- **Time:** `O(m + n)` — single pass over `haystack` and `needle` to compute LPS and search.  
- **Space:** `O(n)` — LPS array of size equal to `needle`.
