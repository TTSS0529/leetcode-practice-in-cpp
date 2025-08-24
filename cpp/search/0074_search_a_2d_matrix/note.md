# 0074 - Search a 2D Matrix

## 🧠 Idea

We are asked to search for `target` in a **2D matrix** with the following properties:

1. Each row is sorted in ascending order.
2. The first element of each row is greater than the last element of the previous row.

This means the entire matrix can be viewed as a **flattened sorted 1D array**.  
So we can directly apply **binary search** on indices from `0` to `m * n - 1`.

---

## 🔁 Step-by-step

1. **Dimensions**  
   - Let `m = matrix.size()` (number of rows).  
   - Let `n = matrix[0].size()` (number of columns).

2. **Binary search range**  
   - Treat the matrix as a 1D array of length `m * n`.  
   - Initialize `left = 0`, `right = m * n` (exclusive).

3. **Binary search loop**  
   - While `left < right`:  
     - Compute `middle = left + (right - left) / 2`.  
     - Map it back to 2D coordinates:  
       - `x = middle / n` → row index.  
       - `y = middle % n` → column index.  
     - Compare `matrix[x][y]` with `target`:  
       - If greater → shrink right boundary (`right = middle`).  
       - If smaller → search right half (`left = middle + 1`).  
       - If equal → return `true`.

4. **Return result**  
   - If the loop finishes without finding `target`, return `false`.

---

## 🛠️ Key Points

- The trick is the **index mapping** between 1D and 2D:  
  - `row = idx / n`  
  - `col = idx % n`  
- Avoids searching row-by-row.  
- This is essentially the same as binary searching on a sorted array of size `m * n`.

---

## ⏱️ Complexity

- **Time:** O(log(m * n)) → binary search on all elements.  
- **Space:** O(1) → constant extra variables.
