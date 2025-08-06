# 0137 - Single Number II

## 🧠 Idea

Use **bit counting (modulo 3)** to find the element that appears **exactly once**, while all others appear **three times**.

- Count how many numbers have a `1` at each bit position (0~31).
- Since other numbers appear **3 times**, their contributions to each bit are multiples of 3.
- Therefore, `count % 3` at each position tells whether the unique number has a `1` at this bit.

## 🔁 Step-by-step

1. Loop each bit position `i` from 0 to 31.
2. Count how many numbers in the array have the `i`-th bit set.
3. If `count % 3 == 1`, set this bit in the answer.
4. Combine all bits to form the final number.

## 🛠️ Key Points

- Utilizes the fact that bits of triplicate numbers contribute in multiples of 3.
- Works for **negative numbers** because of two's complement representation.
- No need for extra memory — only bit counters are used.
- This is the **bit-counting** solution. I’ll handle the more elegant *state-machine-style* bit manipulation approach later.

## ⏱️ Complexity

- **Time:** O(32 × n) ≈ O(n)
- **Space:** O(1)
