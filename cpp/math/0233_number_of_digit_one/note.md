# 0233 - Number of Digit One

## 🧠 Idea

Count how many times digit `1` appears in all numbers from `1` to `n`.

We analyze the number digit by digit from least significant to most significant:

- Let `high` = higher part of the number (digits left of current digit)
- Let `curr` = current digit
- Let `low` = lower part of the number (digits right of current digit)
- Let `digit` = the place value of the current digit (1, 10, 100, ...)

For each digit position:

- If `curr == 0`, count of `1`s contributed by this digit = `high * digit`
- If `curr == 1`, count = `high * digit + low + 1`
- If `curr > 1`, count = `(high + 1) * digit`

We sum counts for all digit positions until all digits are processed.

## 🔁 Step-by-step

1. Initialize `high = n / 10`, `curr = n % 10`, `low = 0`, `digit = 1`, `res = 0`.
2. While `high` or `curr` is not zero:
   - If `curr == 0`, add `high * digit` to `res`.
   - Else if `curr == 1`, add `high * digit + low + 1` to `res`.
   - Else add `(high + 1) * digit` to `res`.
   - Update `low += curr * digit`.
   - Move to the next digit:  
     `curr = high % 10`  
     `high /= 10`  
     `digit *= 10`
3. Return `res`.

## 🛠️ Key Points

- Breaks down counting by each digit position using place value.
- Efficiently handles large `n` without enumerating all numbers.
- Carefully maintains high, current, and low parts to count contributions.
- Classic digit counting approach, useful for similar digit frequency problems.

## ⏱️ Complexity

- **Time:** O(log n) — digit count depends on number length.
- **Space:** O(1)
