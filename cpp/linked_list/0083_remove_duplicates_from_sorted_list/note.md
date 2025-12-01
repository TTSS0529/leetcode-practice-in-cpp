# 0083 - Remove Duplicates from Sorted List

## 🧠 Idea
Given a **sorted singly linked list**, the task is to remove all duplicate elements so that each value appears only once.  
Since the list is already sorted, duplicates always appear **consecutively**, allowing a simple linear pass to eliminate them in place.

---

## 🛠️ Key Points
- Duplicates are adjacent because the list is sorted.
- Traverse with one pointer; compare each node with its next node.
- Skip duplicate nodes by adjusting the `next` pointer.
- No extra data structures or additional memory needed.
- Handles empty lists naturally by returning `nullptr`.

---

## 💡 Intuition
You can think of the list as groups of identical values.  
For each group, retain only the **first occurrence** and bypass the rest.  
This makes the operation efficient and straightforward with a single traversal.

---

## ⏱️ Complexity
- **Time:** `O(n)` — one pass through the list  
- **Space:** `O(1)` — in-place updates, no extra storage  
