# 1823 - Find the Winner of the Circular Game

## 🧠 Idea

We need to find the winner in a circular elimination game (Josephus Problem):  
- `n` players are arranged in a circle.
- Starting from player 1, count `k` players each time, and eliminate the `k`-th.
- Repeat until only one player remains.

**Key observation**:  
This is a **Josephus Problem**, which has a well-known recurrence relation:

\[
f(1, k) = 0
\]
\[
f(n, k) = (f(n-1, k) + k) \bmod n
\]

Here:
- \( f(n, k) \) is the **0-based index** of the winner among `n` players.
- Final answer is \( f(n, k) + 1 \) because the problem uses **1-based indexing**.

### Two approaches:
1. **Simulation (O(n × k))**  
   - Use a queue/deque to simulate elimination.
   - Easy to understand, but slow for large `n`.

2. **Mathematical recurrence (O(n))** ✅ Optimal  
   - Start from `dp = 0` (base case with 1 player).
   - Iteratively apply `dp = (dp + k) % i` for `i = 2` to `n`.
   - Return `dp + 1`.

## 🔁 Step-by-step (Optimal DP)

1. Initialize `dp = 0` (winner index for 1 player).
2. Loop `i` from 2 to `n`:
   - `dp = (dp + k) % i`
3. Return `dp + 1` (convert to 1-based index).

## 🛠️ Key Points

- **Josephus Problem** recurrence avoids explicit simulation.
- Runs in O(n) time, O(1) space.
- Simulation approach works but can time out for large inputs.

## ⏱️ Complexity

- **Time:** O(n) — single pass computation.
- **Space:** O(1) — only a few integer variables.
