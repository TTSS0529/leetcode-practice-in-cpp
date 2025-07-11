# 0230 - Kth Smallest Element in a BST

### 🧠 Idea  
Take advantage of the **Binary Search Tree (BST)** property:  
**In-order traversal visits nodes in ascending order**.

Use a recursive in-order traversal and decrement `k` at each visited node.  
When `k == 0`, the current node is the k-th smallest element.

### 🛠️ Key Points  
- BST in-order traversal gives sorted node values.  
- Use a member variable `_k` to track how many nodes remain to visit.  
- Stop recursion early once the target node is found.  
- `!(--_k)` ensures we decrement before checking if `k == 0`.

### ⏱️ Complexity  
- **Time**: O(H + k)  
  - H = height of the tree (O(log n) for balanced trees, O(n) in the worst case)  
  - k = number of visited nodes before finding the k-th smallest  
- **Space**: O(H)  
  - Recursion stack depth equals the height of the tree

---

## 🆚 Summary

| Feature              | Value                          |
|----------------------|--------------------------------|
| Traversal Strategy   | In-order DFS                   |
| Early Termination    | ✅ Yes                         |
| Extra Data Structure | ❌ None                        |
| BST Property Usage   | ✅ Fully utilized              |
| Tree Modification    | ❌ No                          |
| LeetCode Runtime     | 100%                           |