# 0231 - Power of Two

## 🧠 Idea

Check whether a given integer is a **power of two**, i.e., whether its binary representation contains **exactly one `1` bit** (e.g., `1`, `10`, `100`, `1000`, ...).

A power of two has a unique property:  
`n & (n - 1)` will be zero *only when `n` contains just one set bit*.

## 🔁 Step-by-step

1. If `n < 1`, immediately return `false` (powers of two are positive).
2. Evaluate `(n & (n - 1))`
   - If result is `0`, there is only one “1” bit → return `true`
   - Otherwise, return `false`

## 🛠️ Key Points

- Bit trick: `n & (n - 1)` removes the **lowest set bit**.
- Only true power-of-two integers will turn into zero after this operation.
- Clean and efficient way to check with **bit manipulation**.

## ⏱️ Complexity

- **Time:** O(1)
- **Space:** O(1)
