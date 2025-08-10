# 0400 - Nth Digit

## 🧠 Idea

Find the **n-th digit** in an infinite sequence: `123456789101112131415...`

The sequence can be divided into **blocks** based on digit length:  
- 1-digit numbers: 1 ~ 9 → 9 numbers, 9 digits  
- 2-digit numbers: 10 ~ 99 → 90 numbers, 180 digits  
- 3-digit numbers: 100 ~ 999 → 900 numbers, 2700 digits  
- ...

We **skip entire blocks** until we find the block containing the n-th digit, then locate the exact number and digit.

## 🔁 Step-by-step

1. Start with:
   - `digit = 1` (current block’s digit length)
   - `start = 1` (first number in current block)
   - `count = 9 × digit × start` (total digits in current block)
2. While `n > count`, subtract `count` from `n`, move to the next block:
   - `digit++`
   - `start *= 10`
   - `count = 9 × digit × start`
3. Find the **target number**:
   - `num = start + (n - 1) / digit`
4. Convert `num` to string, return the `(n - 1) % digit`-th digit.

## 🛠️ Key Points

- **Block-based skipping**: Efficiently skips large parts of the sequence.
- Works for **any large n** without generating the sequence.
- Uses `long long` to prevent overflow in `count`.
- Index math: `(n - 1)` is important to handle 1-based indexing correctly.

## ⏱️ Complexity

- **Time:** O(log n) — because digit length grows logarithmically.
- **Space:** O(1) — only a few integer variables are used.
