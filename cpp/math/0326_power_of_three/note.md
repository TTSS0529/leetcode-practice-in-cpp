# 0326 - Power of Three

### 🧠 Idea
We need to **determine if a given integer `n` is a power of three**.  
A number is a power of three if it can be written as \(3^k\) for some integer \(k \ge 0\).  
This means that repeatedly dividing `n` by 3 should eventually yield 1.

---

### 🛠️ Key Points
- If `n` is **less than or equal to 0**, it cannot be a power of three.  
- While `n` is divisible by 3, divide it by 3.  
- After the loop, if `n` equals 1, it is a power of three; otherwise, it is not.

---

### 💡 Intuition
A number \(n\) is a power of three if its prime factorization contains **only 3’s**.  
Repeatedly removing factors of 3 will reduce it to 1:  

\[
n = 3^k \implies n / 3 / 3 / \dots / 3 = 1
\]

If any other prime factor exists, the result after repeated division will **never** be 1.

---

### ⏱️ Complexity
- **Time:** `O(log₃ n)` — each division reduces `n` by a factor of 3.  
- **Space:** `O(1)` — only constant extra space is used.
