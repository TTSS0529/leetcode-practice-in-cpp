# 0160 - Intersection of Two Linked Lists

### 🧠 Idea  
Two approaches:  
1. Brute-force with a hash set to store nodes of list A, then scan list B to find the first matching address.  
2. Optimized two-pointer approach: traverse both lists, switching heads when reaching the end.  
They will align at the intersection or at `nullptr` if no intersection exists.

---

### 🔁 Brute-force Version  
Use a hash set to store all nodes of `headA`, then iterate through `headB` and check for pointer equality.

#### 🛠️ Key Points  
- Detects intersection by comparing node addresses (not values).  
- Simple but uses extra space.  
- Slower due to hashing overhead.

#### ⏱️ Complexity  
- Time: O(m + n)  
- Space: O(m), where m = length of list A

---

### ⚡ Optimized Version (Two Pointers)  
Use two pointers, each traversing one list. After reaching the end, switch to the other list’s head.  
If there’s an intersection, the pointers will meet; otherwise, both will reach `nullptr`.

#### 🛠️ Key Points  
- Space-efficient (O(1))  
- Elegant and concise  
- Guaranteed to terminate after at most `m + n` steps

#### ⏱️ Complexity  
- Time: O(m + n)  
- Space: O(1)

---

## 🆚 Summary

| Feature            | Brute-force Version       | Optimized Version         |
|--------------------|---------------------------|----------------------------|
| Code Simplicity    | Medium                    | High                       |
| Performance        | Slower (due to hashing)   | Excellent                  |
| Memory Usage       | O(m)                      | O(1)                       |
| LeetCode Runtime   | ~25%                      | ~80%                      |
| Applicable To      | Any two singly linked lists | Any two singly linked lists |

