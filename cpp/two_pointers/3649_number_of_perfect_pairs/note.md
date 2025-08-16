# 3649 - Number of Perfect Pairs

## 🔁 Step-by-step
1. Convert all elements to absolute values (as `long long` to avoid overflow).  
2. Sort the absolute values in ascending order.  
3. Use two pointers to count pairs:  
 - For each `i`, move `j` forward while `numAbs[j] <= 2 * numAbs[i]`.  
 - Add `j - i - 1` to the result.  
4. Return the total count.

---

## 🛠️ Key Points
- **Mathematical simplification:** reduces the complex min/max condition to `y <= 2 * x`.  
- **Two pointers:** sorting ensures monotonicity, each element is visited once.  
- **Use long long:** prevents overflow from `abs(INT_MIN)` and `2 * numAbs[i]`.

---

## ⏱️ Complexity
- **Time:** O(n log n) — sorting + linear two-pointer scan  
- **Space:** O(n) — storing absolute values
