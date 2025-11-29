# 0234 - Palindrome Linked List

## 🧠 Idea
Check whether a singly linked list is a palindrome.  
We do **not** use extra space for storing values. Instead, we **reverse the second half** of the list and then compare it with the first half.

- Use **slow and fast pointers** to find the middle of the list.
- Reverse the second half in-place.
- Compare the first half and the reversed second half node by node.

---

## 🛠️ Key Points
- Handle edge cases: empty list or single-node list are trivially palindromes.
- Slow pointer moves **one step**, fast pointer moves **two steps** to locate the middle.
- Reverse the second half using an iterative `reverseList` function.
- Compare values of the first half and the reversed second half. If any mismatch occurs, return `false`.
- Optional: you can restore the list by reversing the second half again (not done here).

---

## 💡 Intuition
Think of the linked list as two halves:  
- First half is in original order.  
- Second half is reversed to align with the first half for easy comparison.  

You only need **O(1) extra space** and one pass to reverse plus one pass to compare.

---

## ⏱️ Complexity
- **Time:** `O(n)` — traverses the list twice (once to find middle, once to compare).  
- **Space:** `O(1)` — in-place reversal, no extra memory used.
