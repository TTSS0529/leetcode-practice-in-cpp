# 0108 - Convert Sorted Array to Binary Search Tree

## 🧠 Idea

We are asked to convert a **sorted array** into a **height-balanced Binary Search Tree (BST)**.

Key properties:
- The input array is sorted in **ascending order**.  
- A height-balanced BST means for every node, the **left and right subtrees’ height differ by at most 1**.  
- To achieve balance, we should always pick the **middle element** of the current subarray as the root.  

This naturally suggests a **Divide & Conquer** + **Recursion** approach.

---

## 🔁 Step-by-step

1. **Pick the middle element** of the array/subarray as the root node.  
   - This ensures roughly equal numbers of nodes in the left and right subtrees.  
2. **Recursively construct**:  
   - Left subtree from the left half (`left → mid-1`).  
   - Right subtree from the right half (`mid+1 → right`).  
3. Base case: if `left > right`, return `nullptr`.  

---

## 🛠️ Key Points

- Picking the middle guarantees the BST is **balanced**.  
- Each recursive call reduces the problem size by ~half.  
- This is a typical **Divide & Conquer** pattern.  
- Implementation detail: use `mid = left + (right - left) / 2` to avoid integer overflow.  

---

## ⏱️ Complexity

- **Time:** `O(n)` → every element is visited once to create a node.  
- **Space:**  
  - `O(h)` recursion stack, where `h` is tree height.  
  - Balanced BST → `h ≈ log n`.  

---