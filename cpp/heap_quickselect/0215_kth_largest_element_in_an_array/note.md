# 0215 - Kth Largest Element in an Array

### 🧠 Idea  
We are asked to find the **k-th largest element**, not to sort the entire array.  
There are two main strategies:

1. **Min-Heap** (`priority_queue`):  
   Maintain a min-heap of the top `k` largest elements.

2. **QuickSelect** (Randomized Partitioning):  
   Use a partitioning idea similar to QuickSort to find the k-th largest in expected `O(n)` time.

---

### 🛠️ Key Points  

#### ✅ Min-Heap Approach
- Use a min-heap to keep the largest `k` elements.
- Push the first `k` elements into the heap.
- For the rest:
  - If `n > heap.top()`, replace the smallest in the heap.
- The heap top will be the k-th largest.

#### ✅ QuickSelect Approach
- Randomly select a `pivot`, and partition into:
  - `large`: values greater than pivot
  - `equal`: values equal to pivot
  - `small`: values less than pivot
- If `k <= large.size()`: recurse into `large`
- If `k > large.size() + equal.size()`: recurse into `small`, with adjusted `k`
- Otherwise, pivot is the answer.

---

### ⏱️ Complexity

| Method       | Time Complexity         | Space Complexity | Notes                         |
|--------------|--------------------------|------------------|-------------------------------|
| Min-Heap     | O(n log k)               | O(k)             | Stable & easy to implement    |
| QuickSelect  | **O(n)** average, O(n²) worst | O(n)        | Faster, but randomized pivot  |

---

### 📌 When to Use Which?
- **QuickSelect** is great for **static data** when you only need the result once — it's faster on average.
- **Min-Heap** is better for **streaming data** or repeated queries — it's more stable and supports online processing.
