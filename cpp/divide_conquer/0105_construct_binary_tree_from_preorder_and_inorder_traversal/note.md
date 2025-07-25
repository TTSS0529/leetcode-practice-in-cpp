# 0105 - Construct Binary Tree from Preorder and Inorder Traversal  

### 🧠 Idea  
We want to rebuild a binary tree from:  

- **Preorder** → first element is always the **root**  
- **Inorder** → split into **left & right subtrees** by root index

---

### 🛠️ Key Points  
- Precompute **inorder → index** in O(1) using a **vector offset by +3000**  
  (faster than unordered_map, avoids hash overhead).  
- Recursively build:  
  - `node->left = build(left subtree)`  
  - `node->right = build(right subtree)`  
- Each node processed once → **O(n)**.  

---

### ⏱️ Complexity  

- **Time:**  
  - Build index vector → O(n)  
  - Recursion visits each node once → O(n)  
- **Space:**  
  - O(n) for index vector  
  - O(h) recursion stack (h ≤ n)  

---

## 🆚 Summary  

| Feature              | Unordered Map | Fixed Vector ✅ |
|----------------------|---------------|-----------------|
| Lookup Cost          | Hash O(1) but slower | True O(1) |
| Runtime on LeetCode  | ~75%          | ✅ ~90–95% |
| Extra Memory         | O(n)          | O(6000) |

---