# 0098 - Validate Binary Search Tree

## 🧠 Idea

We are asked to determine if a given binary tree is a **valid Binary Search Tree (BST)**.

A BST must satisfy:
- Left subtree contains only nodes with values **less than** the current node.
- Right subtree contains only nodes with values **greater than** the current node.
- Both left and right subtrees must also be valid BSTs.

There are two common approaches:

1. **Inorder Traversal + Previous Node Check**  
   - Inorder traversal of a BST should produce a **strictly increasing sequence**.  
   - Keep track of the **previous visited node** during traversal.  
   - If at any point `prev->val >= current->val`, the tree is invalid.

2. **Recursive Bounds Check**  
   - Pass down **lower and upper bounds** for each node.  
   - Each node’s value must lie strictly between `(lower, upper)`.  
   - For left child: `(lower, node->val)`  
   - For right child: `(node->val, upper)`  

---

## 🔁 Step-by-step

### 🔹 Method 1: Inorder Traversal
1. Maintain a pointer `prev` to the last visited node.  
2. Traverse the tree in inorder: `Left → Node → Right`.  
3. Each time before moving forward, check if `prev->val >= current->val`.  
   - If yes → return false.  
   - Else update `prev = current`.

### 🔹 Method 2: Recursive Bounds
1. Define a helper function `recur(node, lower, upper)`.  
2. Base case: if `node == nullptr`, return true.  
3. If `node->val` is not in `(lower, upper)`, return false.  
4. Recursively validate:  
   - `node->left` with `(lower, node->val)`  
   - `node->right` with `(node->val, upper)`  

---

## 🛠️ Key Points

- **Method 1** leverages inorder traversal’s sorted property.  
- **Method 2** explicitly enforces the BST property at every node.  
- Both methods are widely used and accepted.  
- Use `long long` bounds in Method 2 to avoid integer overflow (`INT_MIN - 1`, `INT_MAX + 1`).  

---

## ⏱️ Complexity

- **Time:** `O(n)` → each node is visited once.  
- **Space:**  
  - `O(h)` recursion stack, where `h` is tree height.  
  - Worst case (skewed tree) → `O(n)`.  

---
