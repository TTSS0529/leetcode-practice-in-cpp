# 0167 - Two Sum II - Input Array Is Sorted

### 🧠 Idea  
Use the **two-pointer technique** to efficiently find two numbers that sum up to the target.  
Since the input array is **sorted**, we can start one pointer from the beginning and one from the end:  
- If the sum is too small, move the left pointer to the right.  
- If the sum is too big, move the right pointer to the left.  
- When the sum equals the target, return the 1-based indices.

---

### 🛠️ Key Points  
- Leverages the sorted property of the array.  
- Two-pointer method avoids extra space.  
- Guaranteed to find exactly one solution.  
- Make sure to return **1-based indices** as required.

---

### ⏱️ Complexity  
- Time: O(n), where n = size of the array  
- Space: O(1)

---

## 🆚 Summary

| Feature            | Version 1              |
|--------------------|------------------------|
| Code Simplicity    | Very High              |
| Performance        | Excellent              |
| Memory Usage       | O(1)                   |
| Applicable To      | Sorted arrays, two-sum |
| LeetCode Runtime   | 100%                   |
