# 0768 - Max Chunks To Make Sorted II

## 🧠 Idea

Use a **greedy strategy with a monotonic stack** to determine how many chunks the array can be split into such that sorting each chunk individually and concatenating results in a fully sorted array.

Since duplicates are allowed in this version (compared to 0769), we cannot rely only on the “max-so-far” method.  
Instead, we use a stack to track the **maximum value of each chunk** under construction.

## 🔁 Step-by-step

1. Iterate through the array:
   - If the stack is empty or `arr[i] >= stack.top()`, push `arr[i]` as a new chunk.
   - Otherwise, we need to **merge chunks**, because the current element is smaller than the previous chunk’s maximum:
     - Pop until the current element is ≥ the new top.
     - Keep the **max value** of that merged chunk and push it back.

2. The size of the stack at the end corresponds to the number of chunks.

## 🛠️ Key Points

- **Monotonic stack** keeps track of chunk maximums in increasing order.
- If the current number breaks the order, we merge previous chunks.
- Handles duplicate values gracefully — unlike the simpler 0769 version.

## ⏱️ Complexity

- **Time:** O(n) — each element is pushed/popped at most once  
- **Space:** O(n) — for the stack
