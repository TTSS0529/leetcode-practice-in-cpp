# 0191 - Number of 1 Bits

## 🧠 Idea

Count how many **“1” bits** appear in the binary representation of an integer.  
There are two common ways to do this:

1. **Naive version** — check each bit one by one using `n & 1` and right shift.
2. **Optimized version (Brian Kernighan’s Algorithm)** — repeatedly remove the lowest set bit using `n &= (n - 1)`.

## 🔁 Step-by-step

### ✅ Optimized Version (Recommended)

1. Initialize `res = 0`
2. While `n != 0`:
   - Increment `res`
   - Perform `n &= (n - 1)` to drop the lowest `1` bit
3. Return `res`

### 🟡 Naive Version (for understanding)

1. Initialize `res = 0`
2. While `n != 0`:
   - Add `n & 1` to `res` (check lowest bit)
   - Right shift `n >>= 1`
3. Return `res`

## 🔍 Comparison

| Method                  | Time Complexity | Loop Count         | Notes                                                  |
|-------------------------|-----------------|---------------------|---------------------------------------------------------|
| Naive Right Shift       | O(32)           | Always 32 (for 32-bit int) | Simpler, checks every bit          |
| Brian Kernighan’s Algo  | O(k)            | Only `k` times (`k` = number of 1s) | More efficient when input has few `1` bits|

## 🛠️ Key Points

- `n & (n - 1)` removes the **rightmost set bit**
- Brian Kernighan’s algorithm is faster and elegant
- A classic bit manipulation trick

## ⏱️ Complexity

- **Time:** O(k), where *k* is the number of set bits (≤ 32)  
- **Space:** O(1)
