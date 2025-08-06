# 0371 - Sum of Two Integers

## 🧠 Idea

Use **bit manipulation** to compute the sum of two integers *without using the `+` or `-` operators*.

- **XOR (`^`)** gives the partial sum *without carry* (like binary addition without carrying).
- **AND (`&`) + left shift** gives the *carry* bits.
- Repeat this process until there is **no carry left**.

## 🔁 Step-by-step

1. While `b != 0`:
   - `carry = (a & b) << 1` → find carry bits and move them to the correct position.
   - `a = a ^ b` → add without carry.
   - `b = carry` → keep adding until carry becomes 0.
2. When no carry remains, `a` holds the final sum.

## 🛠️ Key Points

- Bit trick: `a ^ b` adds bits without carry.
- `(a & b) << 1` computes carry bits.
- Loop simulates manual addition until all carries are absorbed.
- Works even for **negative numbers** due to two’s complement binary representation.

## ⏱️ Complexity

- **Time:** O(1) (at most 32 iterations for 32-bit ints)
- **Space:** O(1)
