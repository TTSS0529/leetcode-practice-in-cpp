# 0023 - Merge k Sorted Lists  

## 🧠 Idea  
We are given `k` sorted linked lists, and we need to **merge them all into a single sorted linked list**.  
Each list node contains an integer value, and we must maintain ascending order in the result.  

---

## 🛠️ Key Points  
- We can use a **min-heap (priority queue)** to efficiently get the **smallest current node** among all lists.  
- Steps:  
  1. Create a **custom comparator** (e.g., `a->val > b->val`) for the min-heap.  
  2. Push the **head node** of each non-empty list into the heap.  
  3. Repeatedly pop the smallest node from the heap:  
     - Append it to the merged list.  
     - If that node has a `next`, push `next` into the heap.  
- Use a **dummy node** to simplify list construction and avoid special cases for the head.

---

## 💡 Intuition  
Think of having `k` sorted queues — each gives you its smallest remaining value at the front.  
By always picking the smallest current value (using a min-heap), you can **merge all lists efficiently** without scanning them linearly every time.  

This is analogous to the **k-way merge** step used in algorithms like *merge sort* or *external sorting*.

---

## ⏱️ Complexity  
- **Time:** `O(N log k)`  
  - `N` = total number of nodes across all lists.  
  - Each push/pop in the heap costs `O(log k)`.  
- **Space:** `O(k)` — heap stores up to one node from each list at a time.
