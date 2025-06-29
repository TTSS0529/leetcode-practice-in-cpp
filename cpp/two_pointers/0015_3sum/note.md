# 0015 - 3Sum

### 🧠 Idea  
Find all **unique triplets** in the array that sum up to zero.  
We use a **sorting + two pointers** strategy:
- Sort the array first.
- Fix the first number `nums[k]` (only when `nums[k] <= 0`), and search for two other numbers `nums[i]` and `nums[j]` such that `nums[k] + nums[i] + nums[j] == 0` using the two-pointer approach.

---

### 🛠️ Key Points  
- Sort the array to allow efficient two-pointer search and duplicate skipping.  
- Skip duplicate `nums[k]`, `nums[i]`, and `nums[j]` to avoid duplicate triplets.  
- When `sum < 0`, move `i` rightward to increase sum.  
- When `sum > 0`, move `j` leftward to decrease sum.  
- When `sum == 0`, record the triplet and move both pointers, skipping duplicates.

---

### ⏱️ Complexity  
- Time: O(n²)  
  - Outer loop runs O(n), inner two-pointer loop runs O(n) in total per iteration.
- Space: O(log n)  
  - For sorting (in-place), and O(1) additional space for two pointers and result storage.

---
