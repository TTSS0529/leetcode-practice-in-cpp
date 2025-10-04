# 0650 - 2 Keys Keyboard

## 🧠 Idea

We need to find the **minimum number of steps** to get exactly `n` 'A's on the notepad, starting from a single 'A'.  
The allowed operations are **Copy All** and **Paste**.  

**Core insight:**  
- The problem can be transformed into **factorizing `n` into primes**.  
- Each factor corresponds to a sequence of Copy + Paste operations.  
- Define the approach:  
  - Break `n` into `n = p1 * p2 * ... * pk` where `pi` are prime factors.  
  - Minimum steps = sum of all prime factors.  

---

## 🔁 Step-by-step

1. **Base case**  
   - If `n == 1` → already have one 'A', so `0` steps.

2. **Factorization**  
   - Iterate `i` from `2` to `sqrt(n)`:
     - While `n % i == 0`:
       - Add `i` to result (represents `i` steps: 1 Copy + `i-1` Pastes).
       - Divide `n` by `i`.
   - If `n > 1` after the loop, it is a prime factor > sqrt(n), add it to the result.

3. **Result**  
   - The sum of all factors gives the minimum number of steps.

---

## 🛠️ Key Points

- **Why prime factorization works:**  
  - Every sequence of Copy All + Paste can be represented as multiplying the current number of 'A's.  
  - Factoring `n` into the smallest possible multipliers ensures minimal operations.

- **Greedy insight:**  
  - Always use the smallest divisor first, because smaller multipliers reduce the total number of operations.

- **Example:**  
  - `n = 9 = 3 * 3` → steps = `3 + 3 = 6`.

---

## ⏱️ Complexity

- **Time:** `O(√n)`  
  - Looping through divisors up to `sqrt(n)`.

- **Space:** `O(1)`  
  - Only a few variables needed.
