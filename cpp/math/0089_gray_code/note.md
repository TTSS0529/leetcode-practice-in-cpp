# 0089 - Gray Code

## 🧠 Idea

Generate the **n-bit Gray code sequence**, where each successive number differs from the previous one by exactly **1 bit**.

**Key observation**:  
There is a direct bitwise formula to get the Gray code for integer `i`:

\[
\text{gray}(i) = i \oplus (i \gg 1)
\]

- Why it works:
  - `i >> 1` shifts bits right, representing the higher bit transitions.
  - XOR (`^`) between `i` and `(i >> 1)` flips **only one bit** between consecutive numbers.
  - This naturally produces a valid Gray code sequence.

**Strategy**:
1. Iterate `i` from `0` to `(1 << n) - 1`.
2. Compute `gray = i ^ (i >> 1)`.
3. Append to the result list.

## 🔁 Step-by-step

1. **Initialize** a vector with capacity `2^n`.
2. **Loop** over `i`:
   - Calculate `gray = i ^ (i >> 1)`.
   - Append to result.
3. **Return** the result.

## 🛠️ Key Points

- Gray code guarantees **1-bit change** between neighbors.
- Formula-based generation → **no recursion or backtracking**.
- Pure bit manipulation → **fast and memory-friendly**.

## ⏱️ Complexity

- **Time:** O(2^n) — must output all codes.
- **Space:** O(2^n) — store the entire sequence.
