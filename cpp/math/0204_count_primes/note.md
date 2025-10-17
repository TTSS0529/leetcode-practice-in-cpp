# 0204 - Count Primes

### 🧠 Idea
We need to count all **prime numbers less than `n`**.  
A prime number is only divisible by `1` and itself —  
so to determine all primes below `n`, we can eliminate all non-primes efficiently using the **Sieve of Eratosthenes**.

---

### 🛠️ Key Points
- Use a boolean array `is_prime` to mark whether each number is prime.  
- Initialize all numbers as prime (`1`), then mark multiples of each prime as non-prime.  
- Start crossing out from `i * i`, since smaller multiples were already handled by smaller primes.  
- Only need to iterate while `i * i < n`.  
- Finally, count how many positions remain marked as prime.

---

### 💡 Intuition
Instead of checking each number individually (which is too slow),  
we **eliminate multiples in batches** — when we mark off all multiples of each prime,  
the remaining numbers must be prime.  

This transforms the problem from repeated division checks →  
a clean, **linear marking process** based on mathematical properties.

---

### ⏱️ Complexity
- **Time:** `O(n log log n)` — the classic sieve efficiency.  
- **Space:** `O(n)` — for the `is_prime` boolean array.
