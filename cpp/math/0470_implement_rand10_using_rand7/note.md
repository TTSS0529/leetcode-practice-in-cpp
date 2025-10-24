# 0470 - Implement Rand10() Using Rand7()

### 🧠 Idea
We need to **generate a uniform random integer in [1, 10]** using only a function `rand7()` that returns a uniform random integer in [1, 7].

The key challenge is to **eliminate bias** when converting from base 7 randomness to base 10.

---

### 🛠️ Key Points
- Each call to `rand7()` gives 7 equally likely outcomes.  
- By combining **two calls**, we can create `7 × 7 = 49` equally likely results.  
- Map these 49 outcomes into a 1D range `[1, 49]` using:  
  ```cpp
  num = (rand7() - 1) * 7 + rand7();
  ```
- Only the first 40 numbers can be evenly divided into 10 equal groups (since `40 % 10 == 0`). Thus:
  - Keep only numbers `1–40` (uniformly distributed).
  - Discard and re-roll if `num > 40`.
- Then we map `[1, 40] → [1, 10]` using:
  ```cpp
  (num - 1) % 10 + 1;
  ```

---

### 💡 Intuition
Think of `(rand7() - 1) * 7 + rand7()` as creating a 7×7 grid of random pairs:
  `(1,1) → 1, (1,2) → 2, ..., (7,7) → 49`
Since 49 can’t be divided evenly into 10 bins, we reject the excess (41–49) to maintain uniform probability.
This technique is known as rejection sampling — we repeatedly generate numbers until we get one in the valid range.

---

### ⏱️ Complexity
- **Time:** `O(1)` (each valid sample may take up to a few tries).
- **Space:** `O(1)` — constant auxiliary space.
