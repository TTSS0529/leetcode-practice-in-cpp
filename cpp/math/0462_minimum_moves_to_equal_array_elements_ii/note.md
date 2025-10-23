# 0462 - Minimum Moves to Equal Array Elements II

### 🧠 Idea
We need to **make all elements in the array equal** using the minimum number of moves,  
where each move increments or decrements a single element by `1`.

The key observation is:  
👉 The **sum of absolute differences** is minimized when all elements become the **median** of the array.

---

### 🛠️ Key Points
- Sort the array (or use `nth_element` to find the median in `O(n)` average time).  
- Choose the **median** element as the target value.  
- Compute the total number of moves as  
  `sum(|num - median| for num in nums)`.

This works because:
- The median minimizes the sum of absolute deviations (`L1` distance).  
- Choosing any number smaller or larger than the median would increase the total distance.

---

### 💡 Intuition
Imagine aligning points on a number line:  
If you pick a point **too far left or right**, the total walking distance increases.  
The **median** is the “balance point” where distances to the left and right are equalized.  

---

### ⏱️ Complexity
- **Time:** `O(n)` average (using `nth_element`), `O(n log n)` if fully sorted.  
- **Space:** `O(1)` — in-place computation.
