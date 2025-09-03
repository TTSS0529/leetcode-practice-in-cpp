# 0763 - Partition Labels  

## 🧠 Idea  

We are asked to partition a string into as many parts as possible so that **each letter appears in at most one part**.  
Finally, return the size of each partition.  

👉 The key insight:  
- Each character `c` in the string has a **last occurrence index**.  
- A partition must extend at least until the **farthest last occurrence** of all characters seen so far.  

So the problem reduces to:  
- Scan the string,  
- Track the **rightmost boundary** of the current partition,  
- Cut when the current index reaches this boundary.  

---

## 🔁 Step-by-step  

1. **Precompute last occurrence**:  
   - Traverse the string once,  
   - Record the last index of each character (26 letters).  

2. **Partition scan**:  
   - Initialize `left = 0`, `right = 0`.  
   - Traverse the string again:  
     - Update `right = max(right, lastIndex[s[i]])`.  
     - If `i == right`:  
       - A complete partition ends here.  
       - Record its size: `right - left + 1`.  
       - Move `left = right + 1` to start next partition.  

3. Return all partition sizes.  

---

## 🛠️ Key Points  

- **Greedy choice:**  
  - Always extend the partition to cover the farthest last occurrence of all letters encountered.  
- Partition ends **only when current index reaches this farthest boundary**.  
- Each character is guaranteed to belong to exactly one partition.  

---

## ⏱️ Complexity  

- **Time:** `O(n)` → two passes: one for last occurrence, one for partitions.  
- **Space:** `O(1)` → fixed array of size 26.  
