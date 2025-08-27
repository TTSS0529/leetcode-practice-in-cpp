# 0094 - Binary Tree Inorder Traversal

## 🧠 Idea

We are asked to return the **inorder traversal** of a binary tree.  

- Inorder traversal means: **Left → Node → Right**.  
- The simplest way is to use **DFS recursion**:  
  1. Visit the left subtree  
  2. Process the current node  
  3. Visit the right subtree  

---

## 🔁 Step-by-step

1. **Define a helper function** `dfsInorder(node, res)`  
   - If `node` is `nullptr`, just return.  
   - Otherwise:  
     1. Recurse on `node->left`.  
     2. Push `node->val` into result.  
     3. Recurse on `node->right`.

2. **Call helper** starting from `root` with an empty result vector.  

3. **Return result** when traversal is finished.  

---

## 🛠️ Key Points

- Inorder traversal of a **BST** will naturally give elements in **sorted order**.  
- This solution is **recursive**, very clean and intuitive.  
- Could also be solved **iteratively** with a stack to simulate recursion.  

---

## ⏱️ Complexity

- **Time:** `O(n)` → we visit each node once.  
- **Space:**  
  - `O(n)` in worst case recursion stack (for a skewed tree).  
  - `O(h)` in general, where `h` is tree height.  

---
