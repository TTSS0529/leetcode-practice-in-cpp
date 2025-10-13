# 0376 - Wiggle Subsequence  

## 🧠 Idea  

We need to find the **length of the longest wiggle subsequence** — a sequence where the differences between adjacent elements **strictly alternate** between positive and negative.  

**Core insight:**  
- The problem can be solved **greedily** in `O(n)` time.  
- We only care about **the direction of the last difference** — whether it’s up or down.  
- Use two counters:  
  - `up` → length of the longest wiggle subsequence ending with an **upward** difference.  
  - `down` → length of the longest wiggle subsequence ending with a **downward** difference.  

**Transition logic:**  
- When `nums[i] > nums[i-1]`:  
  → We can extend a previous **down** sequence, so `up = down + 1`.  
- When `nums[i] < nums[i-1]`:  
  → We can extend a previous **up** sequence, so `down = up + 1`.  
- Equal values don’t change anything.  

---

## 🔁 Step-by-step  

1. **Initialization**  
   - Start with `up = 1`, `down = 1` — each single element can be both an up and down sequence of length 1.  

2. **Iterate through the array**  
   - For each element `nums[i]`:  
     - If it’s **greater** than the previous one → extend `down` sequence:  
       ```cpp
       up = down + 1;
       ```  
     - If it’s **smaller** than the previous one → extend `up` sequence:  
       ```cpp
       down = up + 1;
       ```  
     - If equal → skip.  

3. **Result**  
   - The answer is `max(up, down)` — the longer of the two possible endings.  

---

## 🛠️ Key Points  

- **Greedy reasoning:**  
  - We don’t need the actual subsequence — only the **length**.  
  - Each time the slope changes, the sequence can be extended.  
- **Why not DP?**  
  - DP can work but takes more space/time.  
  - Greedy works because only the **previous direction** matters.  
- **Edge cases:**  
  - Empty array → length = 0  
  - All equal elements → length = 1  

---

## ⏱️ Complexity  

- **Time:** `O(n)` — single pass through `nums`.  
- **Space:** `O(1)` — constant memory for `up` and `down`.  
