# 0124 - Binary Tree Maximum Path Sum

## 🧠 Idea

We are asked to find the **maximum path sum** in a binary tree.  
A **path** is defined as any sequence of nodes connected by edges, and it can start and end at any node in the tree.  
It does **not** need to pass through the root.

Key observation:  
- For each node, the **best path including this node as the highest point (turning point)** is:
    ```
    node->val + max(0, left subtree sum) + max(0, right subtree sum)
    ```
- The result is the maximum value among all nodes’ turning points.

We use **DFS + recursion** to calculate the best contribution of each subtree while updating the global maximum.

---

## 🔁 Step-by-step

1. **Define helper function `dfsPathSum(node)`**  
 - Returns the maximum sum of a path starting at `node` and extending **downwards** to either left or right.  
 - If the sum of a child subtree is negative, we ignore it by taking `max(0, ...)`.

2. **Recursive relation**  
 - For each node:
   - `left = max(0, dfsPathSum(node->left))`  
   - `right = max(0, dfsPathSum(node->right))`  
 - Update global maximum:
   ```
   res = max(res, node->val + left + right)
   ```
 - Return:
   ```
   node->val + max(left, right)
   ```
   → meaning the maximum contribution this node can give to its parent.

3. **Global variable `res`**  
 - Initialized as `INT_MIN` to handle negative-only trees.  
 - Updated at every node.

4. **Final answer**  
 - Return the global maximum `res`.

---

## 🛠️ Key Points

- **Two roles of DFS**:  
1. Update global max with "turning point" paths.  
2. Return the best contribution for parent recursion.  

- **Negative values**:  
- Use `max(0, …)` to ensure we never add negative subtrees.  

- **Global vs Local**:  
- Local return value = best one-side contribution.  
- Global `res` = best overall path.

---

## ⏱️ Complexity

- **Time:** O(n) → visit each node once.  
- **Space:** O(h) → recursion stack, where `h` is tree height.  

---
