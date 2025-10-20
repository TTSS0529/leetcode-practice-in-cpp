# 0382 - Linked List Random Node

### 🧠 Idea
We need to **pick a node from a linked list randomly, with each node having equal probability**.  
The challenge is that we **cannot know the length of the list upfront** and should ideally use **O(1) extra space**.

---

### 🛠️ Key Points
- Use **Reservoir Sampling** to select a random node while traversing the list.  
- Initialize the result with the head node’s value.  
- For each subsequent node at position `i` (1-based index), **replace the result with probability `1/i`**.  
- Continue until the end of the list.  

---

### 💡 Intuition
Imagine traversing the linked list and maintaining a “current random pick”:  
- The first node is always picked initially.  
- For the second node, randomly decide whether to replace the first pick.  
- For the third node, replace the current pick with probability 1/3, and so on.  

This ensures that **after traversing n nodes, each node has exactly 1/n chance to be selected**, achieving uniform randomness without knowing the total length beforehand.

---

### ⏱️ Complexity
- **Time:** `O(n)` — traverse all nodes in `getRandom()`.  
- **Space:** `O(1)` — only store a pointer and the current selected value.
