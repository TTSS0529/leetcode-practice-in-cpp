# 0148 - Sort List

## 🧠 Idea
To sort a singly linked list efficiently, the best approach is **Merge Sort**, which achieves **O(n log n)** time and **O(1)** extra space when implemented iteratively.

This solution uses a **bottom-up (iterative) merge sort**, avoiding recursion and additional stack usage.

---

## 🛠️ Key Points
- A **dummy node** is used to simplify pointer operations.
- First, compute the length `n` of the list.
- Apply **bottom-up merge sort** with step sizes `1, 2, 4, 8, ...`:
  - For each step size, repeatedly split the list into two chunks: `left` and `right`.
  - Merge these two sorted chunks and attach them to the main list.
- `split()` separates the list into chunks of size `step`.
- `merge()` merges two sorted lists and returns the tail of the merged segment to continue stitching the list.

---

## 💡 Intuition
Linked lists do not support random access, making quicksort or heapsort unsuitable.

However, they are ideal for merge sort because:
- Splitting and merging only requires pointer adjustments.
- Merge operations run in linear time with no extra memory.

Using a bottom-up merge sort:
- Start with sorted segments of size 1.
- Iteratively merge pairs of segments.
- Double the segment size until the whole list becomes sorted.

This approach is stable, efficient, and avoids recursion depth limits.

---

## ⏱️ Complexity
- **Time:** `O(n log n)`  
- **Space:** `O(1)` — fully iterative, no recursion  
