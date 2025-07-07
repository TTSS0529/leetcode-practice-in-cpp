# 0724 - Find Pivot Index

### 🧠 Idea  
Find the index where the sum of elements to the left equals the sum of elements to the right.  
Use **prefix sums** to efficiently calculate sums of subarrays and avoid repeated summations.

---

### 🛠️ Key Points  
- Calculate the total sum of the array first.
- Traverse the array, maintaining a running sum of the left side (`leftSum`).
- For each index `i`, check if `leftSum == totalSum - leftSum - nums[i]`.
- Return the first such index if found, otherwise return -1.
- Optimize by avoiding an extra prefix sums array and use two variables instead.

---

### ⏱️ Complexity

| Metric     | Original Version | Optimized Version |
|------------|------------------|-------------------|
| Time       | O(n)             | O(n)              |
| Space      | O(n)             | O(1)              |

---

### 🆚 Summary

| Feature         | Original Version          | Optimized Version        |
|------------------|--------------------------|-------------------------|
| Code Style       | Uses prefix sums array    | Uses running sums only   |
| Memory Usage     | O(n) due to prefix array | O(1) constant space      |
| Performance      | ✅ 100% runtime           | ✅ 100% runtime          |
| Readability      | Clear and intuitive      | Slightly simpler         |
| Robustness       | Handles all edge cases    | Handles all edge cases   |
