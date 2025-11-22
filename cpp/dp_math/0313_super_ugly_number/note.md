# 0313 – Super Ugly Number

## 🧠 Idea

The task is to find the n-th super ugly number, defined as a positive integer whose prime factors come only from the given list `primes`.

This generalizes the classic Ugly Number problem:  
instead of using `{2, 3, 5}`, we allow any set of primes.

The core idea is to generate the sequence in order:

1. Maintain a list of already-formed super ugly numbers.
2. For each prime, keep a pointer indicating which existing number it will multiply next.
3. At each step, the next super ugly number is the minimum among all candidate values produced by these primes.
4. If multiple primes generate the same minimum value, advance all of their pointers to avoid duplicates.

This produces a strictly increasing sequence of valid super ugly numbers.

---

## 🛠️ Key Points

- Use dynamic programming to build the sequence from smallest to largest.
- Each prime generates its own sorted stream by multiplying itself with previously computed results.
- The overall process is equivalent to merging k sorted lists.
- Always advance every pointer that matches the selected minimum candidate.

---

## 💡 Intuition

Each prime acts like a generator of an infinite increasing sequence:

- `2 × dp`: 2, 4, 6, 8, ...
- `7 × dp`: 7, 14, 21, ...
- `13 × dp`: 13, 26, ...
- …

The super ugly number sequence is simply the **merge** of all these streams, taking the smallest at each step while ensuring no duplicates.

Because any future super ugly number must be one of these prime multiplications, this method guarantees correctness and order.

---

## ⏱️ Complexity

- **Time:** `O(n × k)`  
  (`k` = number of primes; evaluate all candidates at each of the `n` steps)
- **Space:** `O(n + k)`  
  (store the sequence, plus `k` pointers and candidate values)
