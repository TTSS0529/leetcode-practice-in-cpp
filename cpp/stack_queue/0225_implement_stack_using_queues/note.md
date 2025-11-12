# 0225 - Implement Stack using Queues

## 🧠 Idea  
We need to **implement a stack (LIFO)** using **only a single queue (FIFO)**.  
The goal is to make sure that the **most recently pushed element** is always at the **front** of the queue, so we can easily `pop()` or `top()` in O(1) time.

---

## 🛠️ Key Points  
- Use **one queue** to simulate stack behavior.  
- After pushing a new element, we **rotate** the queue so that this new element moves to the **front**.
- Then the front of the queue always represents the **top of the stack**.

---

## 💡 Intuition  
Imagine inserting a new plate to the bottom of a line of plates — you would need to **rotate the line** so that the new plate comes to the front.  
Similarly, after each `push(x)`, we:
1. Enqueue `x`.
2. Move all previous elements (before `x`) to the back of the queue — effectively rotating it.

Thus, the queue’s **front** always holds the **most recently pushed** element.
