# 0135 - Candy

## 🧠 Idea

Use a **greedy strategy with two passes** to distribute candies such that:

- Every child receives **at least one candy**
- A child with a **higher rating** gets more candies than their immediate neighbor

Traverse the array from **left to right** and **right to left**, maintain two arrays to capture constraints from both sides, and finally take the **maximum** at each position to compute the minimum total candies needed.

## 🔁 Step-by-step

1. Initialize `left[i] = 1`  
   Traverse from left to right:
   - If `ratings[i] > ratings[i−1]`, then `left[i] = left[i−1] + 1`

2. Initialize `right[i] = 1`  
   Traverse from right to left:
   - If `ratings[i] > ratings[i+1]`, then `right[i] = right[i+1] + 1`

3. Calculate the answer:  
   `res = sum(max(left[i], right[i]))`

## 🛠️ Key Points

- **Two-sided greedy scan** guarantees both neighbor requirements.
- Take `max(left[i], right[i])` because each child must satisfy both left and right constraints.
- Classic optimal solution with linear time complexity.

## ⏱️ Complexity

- **Time:** O(n) — two passes over the array  
- **Space:** O(n) — uses two auxiliary arrays
