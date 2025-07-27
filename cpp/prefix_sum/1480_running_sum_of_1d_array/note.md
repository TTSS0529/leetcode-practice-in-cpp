# 1480 - Running Sum of 1d Array  

### 🧠 Idea  
We want `runningSum[i] = nums[0] + nums[1] + ... + nums[i]`.  

Instead of recomputing the sum for each `i` (**O(n²)**), we build it incrementally:  

- **res[0] = nums[0]**  
- **res[i] = res[i-1] + nums[i]**  

This is the **prefix sum** technique in its simplest form.  

---

### 🛠️ Key Points  
- Keep a `res` vector storing the cumulative sum  
- For each `i`:  
  - If `res` is empty → push `nums[i]`  
  - Else → push `res.back() + nums[i]`  
- `reserve(len)` to avoid reallocations  
- Works in **one pass**  

---

### ⏱️ Complexity  

- **Time:**  
  - Single loop runs **O(n)**  
- **Space:**  
  - **O(n)** for result array (can also be done in-place if allowed)  

---

## 🆚 Summary  

| Approach              | Time    | Space | Notes |
|-----------------------|---------|-------|-------|
| Naive recompute ❌    | O(n²)  | O(1) | Sum each prefix separately |
| Prefix Sum ✅          | O(n)   | O(n) | Build cumulatively in one pass |
