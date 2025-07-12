# 0235 - Lowest Common Ancestor of a Binary Search Tree

### 🧠 Idea  
Take advantage of the **Binary Search Tree (BST)** property:  
- All nodes in the left subtree are smaller than the root.  
- All nodes in the right subtree are larger than the root.

We traverse the tree from the root:
- If both `p` and `q` are **smaller** than `root`, go **left**.
- If both are **greater**, go **right**.
- Otherwise, we have found the **split point**, i.e., the Lowest Common Ancestor.

---

### 🛠️ Key Points  
- Unlike the general binary tree LCA approach, this one **doesn't require post-order traversal**.  
- Leverages the BST's ordering to avoid visiting unnecessary nodes.  
- Iterative or recursive solution both work well.  
- Return the first node where `p` and `q` no longer lie on the same side.

---

### ⏱️ Complexity  
- **Time**: O(H)  
  - `H` is the height of the tree.  
  - O(log n) for balanced BST, O(n) for skewed trees.  
- **Space**:  
  - Recursive: O(H) stack space  
  - Iterative: O(1)

---

## 🆚 Summary

| Feature              | Value                            |
|----------------------|----------------------------------|
| Traversal Strategy   | Top-down based on node values    |
| Early Termination    | ✅ Yes                           |
| Extra Data Structure | ❌ None                          |
| BST Property Usage   | ✅ Fully utilized                |
| Tree Modification    | ❌ No                            |
| LeetCode Runtime     | ~88% (runtime fluctuation normal)|
