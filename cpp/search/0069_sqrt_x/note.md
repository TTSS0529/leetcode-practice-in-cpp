# 0069 - Sqrt(x)

## 🧠 Idea

We are asked to implement the **integer square root** of a non-negative integer `x`.  
That means returning the **largest integer `r` such that `r * r <= x`**.  

Constraints:  
- `0 <= x <= 2³¹ - 1`  

**Key insight:**  
- The function is **monotonic**: if `mid * mid <= x`, then all numbers ≤ `mid` are valid candidates.  
- This naturally suggests a **binary search** approach.  

---

## 🔁 Step-by-step

1. Initialize search range: `left = 0`, `right = x`.  
2. While `left <= right`:  
   - Compute middle: `mid = left + (right - left) / 2`.  
   - Compare `mid * mid` with `x`:  
     - If equal, return `mid`.  
     - If smaller, move `left = mid + 1` (search larger values).  
     - If larger, move `right = mid - 1` (search smaller values).  
3. When the loop ends, `left` will overshoot by one, so return `left - 1`.  

---

## 🛠️ Key Points

- Use `long long` when computing `mid * mid` to avoid integer overflow.  
- Binary search guarantees finding the correct floor value.  
- Returning `left - 1` ensures correctness when no exact square root is found.  

---

## ⏱️ Complexity

- **Time:** `O(log x)`  
  - Each iteration halves the search range.  
- **Space:** `O(1)`  
  - Only a few variables are used.  
