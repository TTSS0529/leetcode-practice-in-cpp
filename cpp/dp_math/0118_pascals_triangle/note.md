# 0118 - Pascal's Triangle  

## 🧠 Idea  

We need to **generate the first `numRows` of Pascal's Triangle**, where each number is the **sum of the two numbers directly above it**.  

**Core insight:**  
- This is a **simple Dynamic Programming / simulation** problem.  
- Define:  
  - `res[i][j]` = value at row `i`, column `j`  
- Transition:  
  - `res[i][0] = res[i][i] = 1` → first and last element in each row are `1`.  
  - `res[i][j] = res[i-1][j-1] + res[i-1][j]` → sum of two elements above for the middle elements.  

---

## 🔁 Step-by-step  

1. **Initialization**  
   - Create an empty `vector<vector<int>> res`.  

2. **Iterate through rows**  
   - For each row `i` from `0` to `numRows-1`:  
     - Initialize a row of size `i+1` with `1`s.  
     - For each column `j` from `1` to `i-1`:  
       - Set `row[j] = res[i-1][j-1] + res[i-1][j]`.  
     - Append `row` to `res`.  

3. **Result**  
   - Return `res`, which contains the first `numRows` of Pascal's Triangle.  

---

## 🛠️ Key Points  

- **Edge cases:**  
  - Row with `i = 0` has only `1`.  
  - Row with `i = 1` has `[1, 1]`.  
- **Use of `move`:** efficiently moves the row into the result vector to avoid unnecessary copying.  
- **Prefix sums:** each element depends only on the previous row.  

---

## ⏱️ Complexity  

- **Time:** `O(numRows²)`  
  - Each element is computed once.  
- **Space:** `O(numRows²)`  
  - Need to store all rows of the triangle.  
