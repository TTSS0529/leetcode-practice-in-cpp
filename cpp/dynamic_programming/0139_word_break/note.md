# 0139 - Word Break  

## 🧠 Idea  

We need to determine if a string `s` can be segmented into a sequence of one or more words from `wordDict`.  

**Core insight:**  
- This is a **DP / string segmentation** problem.  
- Define: `dp[i]` = whether substring `s[0..i-1]` can be segmented.  
- Transition: check if there exists a `word` in `wordDict` that ends at position `i`.  

---

## 🔁 Step-by-step  

1. Initialize `dp[0] = true` (empty string is always valid).  
2. For each `i = 1..n`:  
   - For each `word` in `wordDict`:  
     - Let `len = word.size()`.  
     - If `i ≥ len` and `s.substr(i - len, len) == word` and `dp[i - len]` is true → mark `dp[i] = true`.  
3. Answer is `dp[n]`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[i]` means `s[0..i-1]` can be segmented.  
- **Transition:** match a word ending at `i`.  
- **Base case:** `dp[0] = true`.  
- **Important:** need to check **both substring match** and **previous dp state**.  

---

## ⏱️ Complexity  

- **Time:** `O(n · m · L)`  
  - `n` = length of `s`  
  - `m` = number of words in dictionary  
  - `L` = max word length (due to substring comparison)  
- **Space:** `O(n)`  
