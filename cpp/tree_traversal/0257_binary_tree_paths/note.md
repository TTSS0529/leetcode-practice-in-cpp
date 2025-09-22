# 0257 - Binary Tree Paths  

## 🧠 Idea  

We are asked to **find all root-to-leaf paths** in a binary tree and return them as strings.  
- A **path** is defined as starting from the root and ending at a leaf node.  
- Each path should be represented in the format:  
  - root->node1->node2->...->leaf

**Key insights:**  
- This is a **DFS traversal problem**.  
- At each node, we build the **current path string**.  
- When reaching a **leaf node**, we push the complete path into the result list.  

---

## 🔁 Step-by-step  

1. Start DFS from the root, initialize path = `to_string(root->val)`.  
2. At each node:  
 - If it’s a **leaf** (no left & no right):  
   - Push the current `path` into the result.  
 - Else:  
   - Recurse left with updated path = `path + "->" + left->val`.  
   - Recurse right with updated path = `path + "->" + right->val`.  
3. Continue until all leaves are reached.  

---

## 🛠️ Key Points  

- **Base case:** if node is `NULL`, just return.  
- **Leaf detection:** `!root->left && !root->right`.  
- We **pass path by value** (string copy) at each recursive call, which is safe and avoids manual backtracking.  
- DFS naturally ensures that all root-to-leaf paths are explored.  

---

## ⏱️ Complexity  

- **Time:** `O(n)`  
- Each node is visited exactly once.  
- **Space:**  
- `O(h)` recursion stack (where `h` is the height of the tree).  
- Extra `O(n)` for storing result strings.  
