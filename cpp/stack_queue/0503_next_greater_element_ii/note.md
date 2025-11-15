# 0503 - Next Greater Element II

## 🧠 Idea  
We are asked to find the **next greater element** for each element in a circular array.  
A circular array means after the last element, we wrap around to the first element.  

This problem is efficiently solved using a **monotonic stack** that keeps track of indices whose next greater element hasn't been found yet.

---

## 🛠️ Key Points  
- Use a stack to store **indices** of elements in decreasing order.  
- Traverse the array **twice** (simulate circular array) using `i % n` for the index.  
- For each element `curr`, pop from the stack all indices `idx` where `nums[idx] < curr`, and set `res[idx] = curr`.  
- Push indices onto the stack only during the **first pass** to avoid duplicate work.  
- Initialize result array with `-1` to handle elements with no next greater element.

---

## 💡 Intuition  
Think of the stack as a set of "waiting" elements that haven’t yet found a bigger number.  
Whenever a bigger number appears, it resolves all elements in the stack that are smaller than it.  

By traversing **twice**, we simulate the circular nature without extra complicated logic.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — each element is pushed and popped at most once.  
- **Space:** `O(n)` — stack can hold up to `n` indices.
