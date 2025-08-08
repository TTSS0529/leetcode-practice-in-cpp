# 0343 - Integer Break

## 🧠 Idea

The goal is to split the integer `n` into at least two **positive integers** whose product is maximized.

**Key observation**:  
From mathematical analysis, breaking `n` into as many `3`s as possible yields the maximum product.

- Why `3`?
  - For `n > 4`, replacing a number with the sum of two or more numbers whose product is larger improves the product.
  - The number `3` is optimal because:
    - `3 * (x - 3)` is greater than `x` when `x >= 5`.
    - `4` is an exception — `2 * 2` is better than `3 * 1`.

So the strategy is:
1. If `n <= 3`, return `n - 1` (must break into at least two numbers).
2. Divide `n` by `3` to maximize the number of `3`s.
3. Handle the remainder:
   - `mod == 0`: all `3`s → product = \( 3^{div} \)
   - `mod == 1`: turn `3 + 1` into `2 + 2` → product = \( 3^{div - 1} \times 4 \)
   - `mod == 2`: just multiply by `2` → product = \( 3^{div} \times 2 \)

## 🔁 Step-by-step

1. If `n <= 3`, return `n - 1`.
2. Compute:
   - `div = n / 3` (how many 3s we can have)
   - `mod = n % 3` (remainder)
3. If `mod == 0`, answer = \( 3^{div} \)  
4. If `mod == 1`, answer = \( 3^{div - 1} \times 4 \)  
5. If `mod == 2`, answer = \( 3^{div} \times 2 \)  

## 🛠️ Key Points

- Always break into **as many 3s as possible**.
- Special case: remainder 1 → replace `3 + 1` with `2 + 2` to improve the product.
- Uses `pow()` from `<cmath>` for exponentiation.

## ⏱️ Complexity

- **Time:** O(1) — only basic arithmetic operations.
- **Space:** O(1) — constant memory usage.
