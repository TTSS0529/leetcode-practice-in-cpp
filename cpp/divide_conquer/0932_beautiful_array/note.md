# 0932 - Beautiful Array  

### 🧠 Idea  
We want an array of size `n` such that **no three elements form an arithmetic progression** —  
that is, for all `i < j`, there is no `k`(`i < k < j`) with `2 * A[k] == A[i] + A[j]`.  

The key idea is a **divide and conquer construction**:  
- Start from a smaller *beautiful array*.  
- Generate new elements by transforming them into **odd** and **even** parts separately.  
- Combine them so that the “no arithmetic progression” property is preserved.  

This recursive structure ensures the array remains “beautiful” at every scale.  

---

### 🛠️ Key Points  
- Construct recursively using smaller beautiful arrays.  
- Separate numbers into **odd** and **even** transformations to break symmetry.  
- Use **memoization** to avoid recomputation.  
- The process guarantees no element is the average of two others.  

---

### 💡 Intuition  
By splitting into odd and even parts,  
we ensure that no arithmetic sequence can span across both groups —  
this pattern recursively eliminates all possible progressions.  

---

### ⏱️ Complexity  
- **Time:** `O(n log n)`  
- **Space:** `O(n)`  
