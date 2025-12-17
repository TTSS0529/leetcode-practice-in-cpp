# 0144 - Binary Tree Preorder Traversal

## 🧠 Idea
The task is to perform a **preorder traversal** of a binary tree without using recursion.

Preorder traversal follows the order:

> **Root → Left → Right**

To achieve this iteratively, we simulate the call stack using an explicit `stack<TreeNode*>`.

---

## 🛠️ Key Points
- Use a **stack** to replace recursion.
- Start by pushing the `root` node onto the stack.
- In each iteration:
  - Pop the top node.
  - Visit it immediately (preorder requires processing the root first).
  - Push the **right child first**, then the **left child**.
- Pushing right before left ensures that the left subtree is processed first, due to stack LIFO behavior.

---

## 💡 Intuition
Recursive preorder traversal implicitly relies on the call stack:

1. Visit the current node.
2. Traverse the left subtree.
3. Traverse the right subtree.

In the iterative version, we must **manually control the traversal order**.  
By always pushing the right child before the left child, the left subtree remains on top of the stack and gets processed first—perfectly matching preorder semantics.

This approach closely mirrors how recursion works internally, but avoids function call overhead and stack overflow risks.

---

## ⏱️ Complexity
- **Time:** `O(n)` — each node is pushed and popped exactly once  
- **Space:** `O(n)` — stack space in the worst case (skewed tree)
