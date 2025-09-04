# 0406 - Queue Reconstruction by Height

## 🧠 Idea

We are asked to **reconstruct a queue** based on two properties `[h, k]`:

- `h` = height of the person  
- `k` = number of people in front who have height ≥ `h`

The goal is to return the reconstructed queue that satisfies all `[h, k]` constraints.

**Key insight:**  

- **Place taller people first** because they do not get affected by shorter people.  
- For people of the same height, insert them according to their `k` value.  
- This allows us to **greedily build the queue** by inserting each person at the position indicated by `k`.

---

## 🔁 Step-by-step

1. **Sort the people**:

   - Descending by height.  
   - For equal height, ascending by `k`.

2. **Reconstruct the queue**:

   - Initialize an empty queue.  
   - Insert each person at the index equal to their `k` value.

3. Return the final queue.

> Note: This greedy approach is simple but has O(n²) time complexity.  
> A **segment tree-based solution** can optimize this to O(n log n), which can be implemented later.

---

## 🛠️ Key Points

- **Greedy strategy:** Taller people first, shorter people follow.  
- **k-value insertion:** Ensures each person has the correct number of taller/equal-height people in front.  
- Sorting by descending height resolves conflicts naturally.

---

## ⏱️ Complexity

- **Time:** O(n²) — inserting into a list can take O(n) per insertion.  
- **Space:** O(n) — for the reconstructed queue.
