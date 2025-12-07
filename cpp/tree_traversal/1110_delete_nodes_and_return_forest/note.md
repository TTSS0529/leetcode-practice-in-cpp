# 1110 - Delete Nodes And Return Forest

## 🧠 Idea

We need to **delete certain nodes** from a binary tree and **return the remaining forest** (collection of trees).  

Key observations:

- **Deleting a node** splits the tree: its children become new roots if they exist.  
- **DFS traversal** allows us to decide for each node whether it should remain or be deleted.  
- Using a **set for `to_delete`** enables fast lookup.

---

## 🔁 Step-by-step

1. **Prepare a set** of nodes to delete for quick lookup.  
2. **Traverse the tree recursively**, processing children before the current node.  
3. **When a node is deleted**:  
   - Its non-null children become new roots in the forest.  
   - The node is removed from its parent.  
4. **After traversal**, if the original root is not deleted, add it to the forest.  
5. **Return the forest** containing all remaining trees.

---

## 🛠️ Key Points

- **Post-order traversal** is essential: children are handled before the current node.  
- **Forest management**: children of deleted nodes become new roots.  
- **Pruning nodes** is done by marking them removed (or returning null).  
- **Efficient deletion check** is achieved with a set.

---

## ⏱️ Complexity

- **Time:** O(n) — each node visited once.  
- **Space:** O(n) — recursion stack + set storing nodes to delete.
