# 0543 - Diameter of Binary Tree

## 🧠 Idea

We need to find the **diameter** of a binary tree — the **longest distance (number of edges)** between any two nodes.

Key observations:

- The diameter may or may not pass through the root.  
- For each node, the longest path **through that node** is the sum of the heights of its left and right subtrees.  
- By tracking the maximum such path for all nodes, we get the global diameter.

We can use **DFS** to traverse the tree, compute subtree heights, and update the diameter simultaneously.

---

## 🔁 Step-by-step

1. **Traverse the tree** using DFS.  
2. **Compute subtree heights** recursively.  
3. **Update the diameter** at each node as the sum of left and right subtree heights.  
4. **Return the global maximum** after the traversal.

---

## 🛠️ Key Points

- **Two roles of DFS**:  
  1. Calculate subtree height for parent computation.  
  2. Update global diameter at each node.  

- **Diameter counts edges**, not nodes.  

- **Post-order traversal** ensures both subtrees are computed before updating diameter.  

- **Global vs local**:  
  - Local return value = subtree height for parent.  
  - Global variable = maximum diameter found anywhere in the tree.

---

## ⏱️ Complexity

- **Time:** O(n) — each node visited once.  
- **Space:** O(h) — recursion stack (h = tree height).
