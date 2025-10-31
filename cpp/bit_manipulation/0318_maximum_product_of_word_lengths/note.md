# 0318 - Maximum Product of Word Lengths

## 🧠 Idea
We need to find the **maximum product of lengths** of two words that share **no common letters**.

👉 Represent each word as a **bitmask** of its characters:  
Each bit corresponds to one letter `'a'–'z'`.

Two words have no common letters if their bitmasks have no overlapping bits:  
`mask1 & mask2 == 0`

---

## 🛠️ Key Points
- Use **bitmasking** to efficiently represent letter sets.  
- Keep only the **longest word length** for each unique bitmask.  
- Compare all mask pairs; if they don’t overlap, update the maximum product.

---

## 💡 Intuition
By transforming words into bitmasks, we replace costly **letter-by-letter comparisons** with a single **O(1) bitwise check**.  
This drastically reduces time complexity, since **26 bits** are enough for all lowercase letters.

---

## ⏱️ Complexity
- **Time:** `O(n²)` — compare all pairs of bitmasks.  
- **Space:** `O(n)` — store each word’s mask and its maximum length.
