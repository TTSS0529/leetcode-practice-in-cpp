# 0297 - Serialize and Deserialize Binary Tree  

### 🧠 Idea  

Two approaches to encode tree:  

1. **BFS Level-order** → `[1,2,3,null,null,4,5]`  
2. **DFS Preorder** → `1,2,#,#,3,4,#,#,5,#,#`  

Both keep `null/#` to preserve shape.  

---

### 🛠️ Key Points  

- **BFS**  
  - Needs `split()` + queue → slow (~5%)  
- **DFS**  
  - Simple recursion + sequential read → faster (~30%)  
  - Can optimize further with pointer parsing  

---

### ⏱️ Complexity  

- **Time:** O(n) serialize + O(n) deserialize  
- **Space:** O(n) string + O(h) recursion stack  

---

### ✅ Summary  

| Method | Pros | Cons |
|--------|------|------|
| BFS    | Clear structure | Extra split/queue overhead |
| DFS ✅ | Compact & faster | Needs pointer optimization for max speed |

👉 **Preferred:** DFS Preorder (simpler & faster).  
