# 0019 - Remove Nth Node From End of List

## 🧠 Idea
Given a singly linked list, the goal is to remove the **nth node from the end** in a single pass.

---

## 🛠️ Key Points
- Use the **two-pointer technique** along with a dummy head to handle edge cases cleanly.
- Move the `fast` pointer ahead by **n + 1 steps** to establish a fixed gap.
- Move both pointers together until `fast` reaches the end.
- At that moment, `slow` is positioned right before the node to be removed.
- Adjust pointers to skip the target node.

---

## 💡 Intuition
By maintaining a distance of `n` nodes between two pointers, the algorithm guarantees the `slow` pointer lands exactly at the predecessor of the node that needs to be removed when traversal finishes.

The dummy node ensures the approach works uniformly, even when the head node itself is the one to be deleted.

---

## ⏱️ Complexity
- **Time:** `O(n)` — one pass through the list  
- **Space:** `O(1)` — constant extra space  
