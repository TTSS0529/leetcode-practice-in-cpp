# 3618 - Split Array by Prime Indices

---

## ✅ Version 1: Naive Prime Check (`isPrime` function)

### 🧠 Idea  
Check for each index whether it is prime using a straightforward `isPrime` function:  
- For each `num`, check divisibility from 2 up to `√num`.  
- If prime, add `nums[i]` to sum A, else to sum B.  
- Return the absolute difference.

### 🛠️ Key Points  
- Simple implementation, easy to understand and write quickly in contests.  
- Each prime check costs up to \(O(\sqrt{n})\), done for each index → total \(O(n \sqrt{n})\).  
- Suffers from performance issues for large arrays.

### ⏱️ Complexity  
- Time: \(O(n \sqrt{n})\)  
- Space: \(O(1)\)

---

## ✅ Version 2: Optimized Sieve of Eratosthenes

### 🧠 Idea  
Precompute primality of all indices in one pass using the Sieve of Eratosthenes:  
- Create a boolean vector `primeState` initialized as true for all indices except 0 and 1.  
- Mark multiples of each prime starting from 2 as non-prime.  
- After sieve, split sums by checking `primeState[i]`.  
- Return the absolute difference.

### 🛠️ Key Points  
- Single sieve precomputation reduces repeated prime checks.  
- Time complexity improves drastically to \(O(n \log \log n)\).  
- Uses extra space proportional to array length for the sieve.

### ⏱️ Complexity  
- Time: \(O(n \log \log n)\)  
- Space: \(O(n)\)

---

## 🆚 Summary

| Feature          | Version 1 (Naive)       | Version 2 (Sieve)            |
|------------------|-------------------------|------------------------------|
| Code Complexity  | Simple, direct          | Slightly more code for sieve  |
| Performance      | Slow for large inputs   | Much faster for large inputs  |
| Memory Usage     | Constant                | Linear in input size          |
| Use Case         | Small inputs or quick prototype | Large inputs or performance critical |
| LeetCode Runtime | Low (~10%)              | High (~78% and above with tuning) |

---
