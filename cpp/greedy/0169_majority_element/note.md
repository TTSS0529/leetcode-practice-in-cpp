# 0169 - Majority Element

## 🧠 Idea

Use the **Boyer-Moore Voting Algorithm** to find the element that appears more than ⌊n / 2⌋ times.

- The algorithm maintains a `maj`(candidate) and a `cnt`(count).
- It makes a greedy-like decision:
  - If the count is zero, pick the current number as the new candidate.
  - If the current number equals the candidate, increment the count.
  - Otherwise, decrement the count.
- Because the majority element occurs more than n / 2 times, it will always survive this elimination process.

## 🔁 Step-by-step

1. Initialize `cnt = 0`.
2. For each number in the array:
   - If `cnt == 0`, set `maj = num`.
   - If `num == maj`, increment `cnt`.
   - Else, decrement `cnt`.
3. Return `maj`.

## 🛠️ Key Points

- Assumes a majority element **always exists**.
- Greedy-like strategy ensures the majority element cannot be fully canceled out.
- O(n) time, O(1) space.

## ⏱️ Complexity

- **Time:** O(n) — single pass.
- **Space:** O(1) — only two variables.
